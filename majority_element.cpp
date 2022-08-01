#include<iostream>
using namespace std;
int majorityElement(int arr[],int n)
{   int res=0,count=1;
    for(int i=1;i<n;i++)
       {if(arr[i]==arr[res])
          count+=1;
        else count-=1;                 // moore's voting algorithm
       if(count==0)
          {res=i;count=1;}
       }
    count=0;
    for(int i=0;i<n;i++)
        if(arr[i]==arr[res])
           count+=1;
    if(count<=n/2)
      return -1;
    return res;
}
int main()
{   int a[]={1,2,10,2,10,10,10},n=7;
    cout<<majorityElement(a,n);  // it will give us the index of a majority element not first occurence index of majority element
    return 0;
}