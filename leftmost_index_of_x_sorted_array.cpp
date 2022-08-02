#include<iostream>
using namespace std;
int leftIndex(int arr[],int n,int x)
{
    int l=0,h=n-1;
    while(l<=h)
    {
      int mid=(l+h)/2;
      if(arr[mid]==x && (arr[mid]!=arr[mid-1]||mid==0))
         return mid;
      else if(arr[mid]<x)
              l=mid+1;
           else if(arr[mid]>x)
                   h=mid-1;
                else h=mid-1;
       
    }
    return -1;
}
int main()
{   int a[]={10,20,20,20,20,20,20},n=7,x=20;   // sorted ascending elements can repeat
    cout<<leftIndex(a,n,x);
    return 0;
}