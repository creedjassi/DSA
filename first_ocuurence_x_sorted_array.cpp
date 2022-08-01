#include<iostream>
using namespace std;
int FirstOccurrence(int arr[],int n, int x)
{   
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]<x)
            l=mid+1;
        else if(arr[mid]>x)
                h=mid-1;
             else if(mid==0||arr[mid-1]!=arr[mid])
                      return mid;
                  else h=mid-1;
    }
    return -1;
}
int main()
{   int a[]={5,10,10,20,20},n=5,x=20; // ascending sorted
    cout<<FirstOccurrence(a,n,x);
    return 0;
}