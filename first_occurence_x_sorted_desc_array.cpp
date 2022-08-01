#include<iostream>
using namespace std;
int FirstOccurrence(int arr[],int n,int x)
{   int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
           h=mid-1;
        else if(arr[mid]>x)
                l=mid+1;
            else if(arr[mid]!=arr[mid-1]||mid==0)
                         return mid;
                 else h=mid-1;
    }    
    return -1;
}
int main()
{   int a[]={30,20,20,10,5},n=5,x=10;
    cout<<FirstOccurrence(a,n,x);
    return 0;
}