#include<iostream>
using namespace std;
int maxIndexDiff(int arr[], int n) 
    { 
        int lmin[n]={0};
        int rmax[n]={0};
        lmin[0]=arr[0];

        for(int i=1;i<n;i++)
            lmin[i]=min(lmin[i-1],arr[i]);
            
        rmax[n-1]=arr[n-1];
        for(int j=n-2;j>=0;j--)
           rmax[j]=max(rmax[j+1],arr[j]);
        
        int i=0,j=0,max_diff=-1;
        while(i<n && j<n)
        {
            if(lmin[i]<=rmax[j])
              {max_diff=max(max_diff,j-i); j+=1;}
            else i+=1;
        }
        return max_diff;
}
int main() 
{   int a[]={34, 8, 10, 3, 2, 80, 30, 33, 1},n=9;   
    cout<<maxIndexDiff(a,n);
    return 0;
}