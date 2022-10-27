#include<iostream>
using namespace std;
void Intersection_2_sorted(int a[],int b[],int n1,int n2)
{
    int j=0,i=0;
    while(i<n1 && j<n2)
    {  if(i>0 && a[i]==a[i-1])
          {i++;continue;}
        if(a[i]<b[j])
           i++;
        else if(a[i]>b[j])
                 j++;
             else {cout<<a[i]<<" ";i++;j++;}
    }
   
}
int main()
{   int a[]={3,8,8},b[]={2,8,8,10,15};
    int n1=3,n2=5;
    Intersection_2_sorted(a,b,n1,n2);
    return 0;
}