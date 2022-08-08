#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countAllPairs(int arr[],int n,int k)
{   int count=0;
    unordered_map <int,int> h;
    for(int i=0;i<n;i++)
         h[arr[i]]+=1;
    for(int i=0;i<n;i++)
       {
        int x=k-arr[i];
        if(h.find(x)!=h.end())
           count+=h[x];
        if(x==arr[i])
           count-=1;
       }
    return count/2;
}
int main()
{   int a[]={1, 1, 1, 1},n=4,k=2;    // 4C2 = 6 it counts all possible pairs excluding (arr[i],arr[i]) since hash map already intialized
    cout<<countAllPairs(a,n,k);      // so take care of this case by sibtracting 1
    return 0;
}