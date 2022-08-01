#include<iostream>
using namespace std;
int FirstOccurence(int arr[],int n,int x)
{  int l=0,h=n-1;
   while(l<=h)
   {
    int mid=(l+h)/2;
    if(arr[mid]>x)
       h=mid-1;
    else if(arr[mid]<x)
           l=mid+1;
        else if(arr[mid]!=arr[mid-1]||mid==0)
               return mid;
            else h=mid-1;
   }
    return -1;
}
int LastOccurrence(int arr[],int n,int x)
{  int l=0,h=n-1;
   while(l<=h)
   {
    int mid=(l+h)/2;
    if(arr[mid]<x)
       l=mid+1;
    else if(arr[mid]>x)
            h=mid-1;
        else if(arr[mid]!=arr[mid+1]||mid==n-1)
                return mid;
            else l=mid+1;
   }
    return -1;
}
int countOccurrences(int arr[],int n,int x)
{   int f=FirstOccurence(arr,n,x);
    int l=LastOccurrence(arr,n,x);
    int ans=l-f+1;
    if(ans>0)
      return ans;
    return 0;
}
int main()
{   int a[]={5,10,20,20,20},n=5,x=20;  // ascending sorted
    cout<<countOccurrences(a,n,x);
    return 0;
}