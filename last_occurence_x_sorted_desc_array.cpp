#include<iostream>
using namespace std;
int LastOccurrence(int arr[],int n,int x)
{  int l=0,h=n-1;
   while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>x)
           l=mid+1;
        else if(arr[mid]<x)
                h=mid-1;
            else if(arr[mid]!=arr[mid+1]||mid==n-1)
                     return mid;
                else l=mid+1;
    }
    return -1;
}
int main()
{   int arr[]={30,20,20,10,10,5},n=6,x=10;
    cout<<LastOccurrence(arr,n,x);
    return 0;
}