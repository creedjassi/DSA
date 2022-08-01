#include<iostream>
using namespace std;
int BinarySearch(int arr[],int x,int l,int h)
{   while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
                l=mid+1;
             else h=mid-1;
    }
    return -1;
}
int InfiniteSearch(int arr[],int x)
{   int i=1;
    while(arr[i]<x)
        i*=2;
    if(arr[i]==x)
       return i;
    return BinarySearch(arr,x,i/2+1,i-1);
}
int main()
{   int a[]={10,20,30,50,80,110,200,500,600,650,700,740,780,900,1000,1100,1150,2000};  //unbounded_binary search
    cout<<InfiniteSearch(a,80);
    return 0;
}