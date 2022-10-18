#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{   int min_index=0;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i+1;j<n;j++)
           {
             if(arr[j]<arr[min_index])
                min_index=j;
           }
        swap(arr[i],arr[min_index]);
    }
}
int main()
{   int arr[]={3,5,4,10,2,1};
    int n=6;
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    return 0;
}