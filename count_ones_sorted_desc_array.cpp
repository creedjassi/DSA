#include<iostream>
using namespace std;
int CountOnes(int arr[],int n)
{   int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==0)
           h=mid-1;
        else if(arr[mid]!=arr[mid+1]||mid==n-1)
                 return mid+1;
             else l=mid+1;
    }
    return 0;
}
int main()
{  int a[]={0,0,0,0},n=4;
   cout<<CountOnes(a,n);
    return 0;
}