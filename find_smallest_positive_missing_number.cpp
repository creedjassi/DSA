#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int findmiss(int arr[],int n)
    {
        for(int i=0;i<n;i++)
           if(abs(arr[i])-1<n && arr[abs(arr[i])-1]>0)
              arr[abs(arr[i])-1]*=-1;
        for(int i=0;i<n;i++)
            if(arr[i]>0)
               return i+1;
       return n+1;
        
    }
    int missingNumber(int arr[], int n) 
    { 
        int j=0;
        for(int i=0;i<n;i++)
           {  if(arr[i]<=0)
                {swap(arr[i],arr[j]);j+=1;}
           }
         
         return findmiss(arr+j,n-j);
    } 
int main()
{   int a[]={1,2,3,4,5},n=5;   //{0,-10,1,3,-20},n=5;
  cout<<missingNumber(a,n);
    return 0;
}