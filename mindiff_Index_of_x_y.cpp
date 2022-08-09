// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y) {
        
        int a1=-1,a2=-1,res=INT_MAX;
        for(int i=0;i<=n;i++)
          {  //cout<<a1<<" "<<a2<<"\n"; 
             if(a1!=a2 && a1!=-1 && a2!=-1)
                 {res=min(res,abs(a2-a1));}// std::cout<<res<<" ";}
              if(arr[i]==x && i<n)
                 a1=i+1;
              if(arr[i]==y && i<n)
                 a2=i+1;
                
          }
          if(res==INT_MAX)
            return -1;
          return res;
}  
int main() {
    // Write C++ code here
    int a[]={98,78,10,12,59,37,45,18,1,56,37,14,3,32,85,10,69,89,29,93,44,16,26,13,50,75,79,21,20,33,55,17,63,64,80,21,52,24,90,52,80,26,18,34,57,2,95,25,42,23,17,85,39,94,50,40,21,28,12,40,61,67,9,23,30,88,95,34,64,85,85,95,62,54,28,19,55,22,95,49,97,64,33
},n=83,x=34,y=56;
    cout<<"\n"<<minDist(a,n,x,y);

    return 0;
}