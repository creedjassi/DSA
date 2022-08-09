#include<iostream>
using namespace std;
void rearrange(long long *arr, int n) 
    {   long long max_ele=arr[n-1]+1;
        long long max_ind=n-1, min_ind=0;
    	for(int i=0;i<n;i++)
          {
              if(i%2==0)
                 {arr[i]+=(arr[max_ind]%max_ele)*max_ele;max_ind-=1;}
              else {arr[i]+=(arr[min_ind]%max_ele)*max_ele; min_ind+=1;}
          }
         for(int i=0;i<n;i++)
            arr[i]/=max_ele;
    	// Your code here
    	 
    }
int main()
{   long long arr[]={1,2,3,4,5,6};
    int n=6;
    rearrange(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}