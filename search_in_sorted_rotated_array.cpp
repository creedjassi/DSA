#include<iostream>
using namespace std;
int Search(int arr[],int n,int x)
{   int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
          return mid;
        if(arr[mid]>arr[l])  
        {   if(x>=arr[l] && x<arr[mid])
               h=mid-1;
            else l=mid+1;
        }
        else {if(x>arr[mid] && x<=arr[h])
                  l=mid+1;
              else h=mid-1;
             }
    }
    return -1;
}
int main()
{   int arr[]={100,200,400,1000,10,20},n=6,x=40;
    cout<<Search(arr,n,x);
    return 0;
}