#include<iostream>
using namespace std;
int rightIndex(int arr[],int n,int x)
{   int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x && (arr[mid]!=arr[mid+1]||mid==n-1))
           return mid;
        else if(arr[mid]>x)
                l=mid+1;
             else if(arr[mid]<x)
                    h=mid-1;
                  else l=mid+1;
    }
    return -1;
}
int main()
{   int arr[]={20,20,20,20,20,20,10},n=7,x=20;
    cout<<rightIndex(arr,n,x);
    return 0;
}