#include<iostream>
#include<unordered_set>
using namespace std;
int countPairs(int arr[],int n,int x)
{
    unordered_set <int> s;
    int count=0;
    for(int i=0;i<n;i++)
     {
        if(s.find(x-arr[i])!=s.end())
           count+=1;
        s.insert(arr[i]);
     }
    return count;
}
int main()
{   int n,x;
    cout<<"No. of elements in Array?\n";
    cin>>n;
    int a[n]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Sum given?\n";
    cin>>x;
    cout<<countPairs(a,n,x);
    return 0;
}