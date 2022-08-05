#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> & nums)
{
    int n=nums.size();
    sort(nums.begin(),nums.end());   // Time nlogn
    vector<vector<int>> ans;
    for(int i=0;i<n-2;i++)
    {
        if(i==0||nums[i]!=nums[i-1])
         {
            int l=i+1,h=n-1;
            while(l<h)
            {
                int sum=nums[i]+nums[l]+nums[h];
                if(sum==0)
                  {
                    ans.push_back({nums[i],nums[l],nums[h]});
                    while(l<h && nums[l]==nums[l+1]) l+=1;
                    while(l<h && nums[h]==nums[h-1]) h-=1;
                    l+=1;
                    h-=1;
                  }
                  else if(sum>0)
                         h-=1;
                       else l+=1; 
            }
         }
    }
    return ans;
}
int main()
{   
    vector<int>a={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threesum(a);
    for(auto it=ans.begin();it!=ans.end();it++)           
      {  vector<int> d=*it;                        
        for(auto it1=d.begin();it1!=d.end();it1++)
             cout<<*it1<<" ";
        cout<<endl;
      }      
    return 0;
}
