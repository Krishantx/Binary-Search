#include <iostream>
using namespace std;

void Sort(int* t, int n)
{
    bool srt = true;
    while (srt)
    {
        for (int i=0; i<(n-1); i++)
        {
            if (*(t+i) > *(t+i+1))
            {
                int temp = *(t+i);
                *(t+i) = *(t+1+i);
                *(t+1+i) = temp;
            }
        }
        int j=0;
        for (int i=0; i<(n-1); i++)
        {
            if (*t < *(t+1+i))
            {
                j++;
            }
            if (j==4)
            {
                srt = false;
            }
        }
    }
}

void prtarr(int* t, int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<*(t+i)<<endl;
    }
}

void Search(int* k, int n)
{
    int search;
    bool foundyet=false;
    cin>>search;
    cout<<*(k+n/2)<<endl;
    if (*(k+n/2) < search)
    {
        for (int i=n/2; i<n; i++)
        {
            if (*(k+i)==search)
            {
                cout<<"Element Found at index: "<<i<<endl;
                foundyet=true;
            }
        }
    }
    else if (*(k+n/2) > search)
    {
        for (int i=0; i<n/2; i++)
        {
            if (*(k+i)==search)
            {
                cout<<"ELEMENT FOUND AT INDEX: "<<i<<endl;
                foundyet=true;
            }
        }
    }
    else if (*(k+n/2)==search)
    {
        cout<<"ELEMENT FOUND AT INDEX: "<<n/2<<endl;
        foundyet=true;
    }
    if (!foundyet)
    {
        cout<<"ELEMENT NOT FOUND"<<endl;
    }
    
}

int main() {
    int n = 5,  a[5] = {98, 77, 80, 900, 1};
    int* p = &a[0];
    Sort(p, n);
    cout<<*p<<endl;
    prtarr(p, n);
    Search(p, n);
    return 0;
}