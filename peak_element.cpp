#include<iostream>
using namespace std;
int PeakElement(int arr[],int n)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if((arr[mid]>=arr[mid-1]||mid==0)&&(arr[mid]>=arr[mid+1]||mid==n-1))
             return mid;
        else if(mid>0 && arr[mid-1]>=arr[mid])
                   h=mid-1;
             else l=mid+1;
    }
    return -1;
}
int main()
{   int a[]={1,5},n=2;
    cout<<PeakElement(a,n);
    return 0;
}