#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   vector <int> nums={2,7,11,5};
    unordered_map <int,int> h;
    int target=9;
    vector<int> ans;
     for(int i=0;i<nums.size();i++)
     {  
        int temp=target-nums[i];
        if(h.find(temp)!=h.end())
               { cout<<i<<" "<<h[target-nums[i]];
            ans.push_back(i); 
            ans.push_back(h[target-nums[i]]);
            break;
            }
        else  //h.insert(make_pair(nums[i],i));
              h[nums[i]]=i;
      }

    return 0;
}