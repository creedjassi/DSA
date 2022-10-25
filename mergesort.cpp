#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{   
    int n1=mid-low+1,n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
   { left[i]=arr[i+low];}
    for(int j=0;j<n2;j++)
    {right[j]=arr[mid+j+1]; }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
          {arr[k]=left[i];i++;k++;}
        else {arr[k]=right[j];j++;k++;}
    }
    while(i<n1)
    {arr[k]=left[i];i++;k++;}
    while(j<n2)
    {arr[k]=right[j];j++;k++;}

}
void mergeSort(int arr[],int low,int high)
{   if(high>low)
    {
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
    // for(int i=0;i<5;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;
}

int main()
{
    int arr[]={5,3,4,1,2};
    int n=5;
    mergeSort(arr,0,n-1);
    for(int i=0;i<5;i++)
       cout<<arr[i]<<" ";
}