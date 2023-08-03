//find the greatest number nearest to the target = 15 , 
#include <iostream>
using namespace std;

int main() {
    int a[7] = {2,3,5,9,14,16,18};
    int n=15, i=0, d=-1;
    int first = 0, last = 6, mid;
    bool w = true;
    while (w)
    {
        mid = first + (last - first)/2;
        i=a[mid];
        cout<<i<<" "<<mid<<endl;
        if (i>=15)
        {
            if (d>(i-n))
            {
                d=i-n;
                last = mid;
            }
            else
            {
                w=false;
            }
            
        }
        else
        {
            first = mid;
        }
    }
    cout<<i<<endl;
    return 0;
}