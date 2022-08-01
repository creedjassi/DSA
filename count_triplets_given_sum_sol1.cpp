#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
pair<int,int> countTriplets(int arr[],int n,int x)
{
    sort(arr,arr+n);
    set <string> s;
    int count=0;
    for(int i=0;i<n-1;i++)
     {  int l=i+1,r=n-1;
        int temp=x-arr[i];
        while(l<r)
        {  int sum=arr[l]+arr[r];
            if(sum==temp)
              { string triplet=to_string(arr[i])+','+to_string(arr[l])+','+to_string(arr[r]);
                count+=1;l+=1;r-=1;
                if(s.find(triplet)==s.end())
                   s.insert(triplet);
              }
            else if(sum<temp)
                    l+=1;
                 else r-=1;
        }
     }
    for(auto& str: s)
  {
    std::cout << str << '\n';
  }
    pair<int,int> ans={count,s.size()};
    return ans;
     

}
int main()
{   int a[]={ 0, -1, 2, -3, 1, -1, 3, 0},n=8,x=-2;
    pair<int,int> result;
    result=countTriplets(a,n,x);    // think to not count duplicates
    cout<<result.first; cout<<endl;
    cout<<result.second;
    return 0;
}