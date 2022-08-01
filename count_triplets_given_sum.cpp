#include<iostream>
#include<unordered_set>
using namespace std;
int tripletCount(int arr[],int n, int x)
{   int count=0;
    for(int i=0;i<n-1;i++)
       {  unordered_set <int> s;
          for(int j=i+1;j<n;j++)
             {int temp=x-(arr[i]+arr[j]);
               if(s.find(temp)!=s.end())
                   count+=1;
               s.insert(arr[j]);
             }
       }
    return count;
}
int main()
{   int n,x;
    cout<<"No. of elements in Array?\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];                               // solve for removing duplicates [0,-1,2,-3,1,-1,3,0] , sum=-2
    cout<<"Sum Value?\n";
    cin>>x;
    cout<<"Count of triplets found : "<<tripletCount(a,n,x);
    return 0;
}