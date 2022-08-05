 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        // set <vector<int>> ans; not working
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            int temp=nums[i];
            unordered_map<int,int> h;
            for(int j=i+1;j<n;j++)
              { int temp1=temp+nums[j];
                if(h.find(-1*temp1)!=h.end())
                    {
                       if(i!=j && i!=h[-1*temp1] && j!=h[-1*temp1])
                         {   
                             vector<int> a={nums[i],nums[j],nums[h[-1*temp1]]};  
                                 //ans.insert(a);
                                 ans.push_back(a);
                           }
                    }
                else h.insert(make_pair(nums[j],j));
                     
                } 
          }
       // vector<vector<int>> ans1;
      //  for(auto it=ans.begin();it!=ans.end();it++)
         //    ans1.push_back(*it);
            return ans;
        }
int main()
{   vector<int>a={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(a);
    for(auto it=ans.begin();it!=ans.end();it++)            // think how to remove duplicates
      {  vector<int> d=*it; 
        for(auto it1=d.begin();it1!=d.end();it1++)
             cout<<*it1<<" ";
        cout<<endl;
      }      
    return 0;
}