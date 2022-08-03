#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void twoRepeats(int arr[],int n)
{   vector<int> ans;
    for(int i=0;i<n+2;i++)
      {
        if(arr[abs(arr[i])]>0)
           arr[abs(arr[i])]*=-1;
        else cout<<abs(arr[i])<<" ";
      }
}
int main()
{   int a[]={1,2,2,1},n=2;   // time = O(n) , aux space = O(1) 
    twoRepeats(a,n);
    return 0;
}