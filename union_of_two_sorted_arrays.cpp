#include<iostream>
using namespace std;
void Union_2_sorted(int a[],int b[],int n1, int n2)
{   int i=0,j=0;
  //  int c[n1+n2];
    while(i<n1 && j<n2)
    {  if(i>0 && a[i]==a[i-1]) {i++; continue;}
       if(j>0 && b[j]==b[j-1]) {j++; continue;}
        if(a[i]<b[j])
        { cout<<a[i]<<" ";i++;}
        else if(a[i]>b[j])
              {cout<<b[j]<<" ";j++;}
             else {cout<<a[i]<<" "; i++;j++;}
    }
    while(i<n1)
    { if(i==0 || a[i]!=a[i-1]) cout<<a[i]<<" ";i++;}
    while(j<n2)
    { if(j==0 || b[j]!=b[j-1]) cout<<b[j]<<" ";j++;}
}
int main()
{
    int a[]={3,8,8},b[]={2,8,8,10,15};
    int n1=3,n2=5;
    Union_2_sorted(a,b,n1,n2);
    return 0;
}