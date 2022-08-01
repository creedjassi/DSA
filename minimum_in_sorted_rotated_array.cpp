#include<iostream>
using namespace std;
int minElement(int arr[],int n)
{
    int l=0,h=n-1;
    while(l<=h)
    {
      int mid=(l+h)/2;
      if(arr[mid-1]>arr[mid]||mid==0)
         return mid;
      if(arr[mid+1]<arr[mid]||mid=n-1)
          return mid+1;
      if(arr[mid]>arr[h])
           l=mid+1;
      else h=mid-1;
    }
    return -1;
}
int main()
{   int a[]={10,20,30,30,50,8,9},n=7;
    cout<<minElement(a,n);
    return 0;
}