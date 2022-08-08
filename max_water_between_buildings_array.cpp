#include<iostream>
using namespace std;
int MaxWater(int arr[],int n)
{
    int l=0,h=n-1,ans=0;
    while(l<=h)
    {
      if(arr[l]<arr[h])
        {ans=max(ans,(h-l-1)*arr[l]);  // -1 since we consider buildings width as one index 
         l+=1;
         }
      else if(arr[l]>arr[h])
               {ans=max(ans,(h-l-1)*arr[h]);  // -1 since we consider buildings width as one index 
               h-=1;
               }
            else {ans=max(ans,(h-l-1)*arr[h]);  // -1 since we consider buildings width as one index 
                  l+=1;
                  h-=1;
                  }     
    }
    return ans;
}
int main()
{   int a[]= {2, 1, 3, 4, 6, 5},n=6;   // 2 pointer approach best
    cout<<MaxWater(a,n);              // naive nested for loops to fix i and find n-1 pair values and compare hence time=n^2
    return 0;
}