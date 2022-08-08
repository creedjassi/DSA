#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1>n2){
            return findMedianSortedArrays(nums2, nums1);
        }

        int begin1=0,end1=nums1.size();
        while(begin1<=end1)
        {   
            int i1=(begin1+end1)/2;
            int i2=(n1+n2+1)/2 - i1;
            int min1=(i1==n1)?INT_MAX:nums1[i1];
            int max1=(i1==0)?INT_MIN:nums1[i1-1];
            int min2=(i2==n2)?INT_MAX:nums2[i2];
            int max2=(i2==0)?INT_MIN:nums2[i2-1];
            
            if(min1>=max2 && min2>=max1)
            {
                if((n1+n2)%2==0)
                    return (double)(max(max1,max2)+min(min1,min2))/2; //remember first add and then typecast and then divide by 2 else lossy conversion
                else return (double)max(max1,max2);
            }
            else if(min1<max2)
                    begin1=i1+1;
                 else end1=i1-1;
        }
        return (double)0;
    }
    int main()
    {   vector<int>a={1,2,3,4},b={4,5};
        cout<<findMedianSortedArrays(a,b);
        return 0;
    }