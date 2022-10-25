#include<iostream>
using namespace std;
int countInverstionsMerge(int arr[],int low,int mid, int high)
{
  int n1=mid-low+1,n2=high-mid;
  int left[n1],right[n2];
  for(int i=0;i<n1;i++)
      left[i]=arr[i+low];
  for(int i=0;i<n2;i++)
      right[i]=arr[mid+1+i];
  int res=0,i=0,j=0,k=low;
  while(i<n1 && j<n2)
  {
    if(left[i]<=right[j])
     { arr[k]=left[i];i++;}
     else {arr[k]=right[j];j++;res+=(n1-i);}
     k++;
  }
  while(i<n1)
  {arr[k]=left[i];i++;k++;}
  while(j<n2)
  {arr[k]=right[j];j++;k++;}
  return res;
}
int countInverstions(int arr[],int low,int high)
{   int res=0;
    if(high>low)
    {
        int mid=(low+high)/2;
        res+=countInverstions(arr,low,mid);
        res+=countInverstions(arr,mid+1,high);
        res+=countInverstionsMerge(arr,low,mid,high);
    }
    return res;
}
int main()
{
    int arr[]={40,30,20,10};
    int n=4;
    int r=countInverstions(arr,0,n-1);
    cout<<r;
    return 0;
}