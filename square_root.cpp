#include<iostream>
using namespace std;
int squareRoot(int x)
{
    int l=1,h=x,ans=-1;
    while(l<=h)
    {   int mid=(l+h)/2;
        int msq=mid*mid;
        if(msq==x)
         return mid;
        else if(msq<x)
               {l=mid+1;ans=mid;}
             else if(msq>x)
                   h=mid-1;
    }
    return ans;
}
int main()
{   int x=17;
    cout<<squareRoot(x);
    return 0;
}