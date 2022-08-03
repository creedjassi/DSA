#include<iostream>
using namespace std;
bool isFeasible(int arr[],int n,int k,int ans)
{   int sum=0,req=1;
    for(int i=0;i<n;i++)
       {
        if(sum+arr[i]>ans)
           {
            req+=1;
            sum=arr[i];
           }
        else sum+=arr[i];
       }
    return (req<=k);
}
int minPages(int arr[],int n, int k)
{
    int sum=0,mx=0;
    for(int i=0;i<n;i++)
        { sum+=arr[i];
          mx=max(mx,arr[i]);
        }
    int l=mx, h=sum, res=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(isFeasible(arr,n,k,mid))
          { res=mid;
            h=mid-1;
          }
        else l=mid+1;
    }
    return res;
}
int main() 
{   int arr[]={10,5,20},n=3,k=2;   //better solution - dynamic programming solution exists
    cout<<minPages(arr,n,k);
    return 0;
}