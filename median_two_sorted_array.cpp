#include<iostream>
using namespace std;
int getMedian(int a1[],int n,int a2[],int m)
{
    int begin=0,end=n;
    while(begin<=end)
    {
        int mid1=(begin+end)/2;
        int mid2=(n+m+1)/2 - mid1;
        int min1=(mid1==n)? INT_MAX: a1[mid1];    // if min1 reaches n so array is sorted hence INT_MAX at limit
        int max1=(mid1==0)? INT_MIN: a1[mid1-1];  // if max1 reaches 0 so array is sorted hence INT_MIN at limit
        int min2=(mid2==m)? INT_MAX: a2[mid2];   // if min2 reaches m so array is sorted hence INT_MAX at limit
        int max2=(mid2==0)? INT_MIN: a2[mid2-1];  // if max2 reaches 0 so array is sorted hence INT_MIN at limit
        if(min1>=max2 && min2>=max1)
          {
            if((n+m)%2==0)
              return (max(max1,max2)+min(min1,min2))/2;
            else return max(max1,max2);
          }
        else if(max2>min1)
                begin=mid1+1;
             else end=mid1-1;   // case max1>min2
    }
    return -1;
}
int main()
{   int a[]={1,2,3,4},b[]={4},n=4,m=1;  // this is for ascending sorted array
    cout<<getMedian(a,n,b,m);
    return 0;
}
