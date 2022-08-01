#include<iostream>
using namespace std;
int getMedian(int a1[],int n, int a2[], int m)
{
    int begin=0,end=n;
    while(begin<=end)
    {
        int mid1=(begin+end)/2;
        int mid2=(n+m+1)/2 - mid1;
        int min1=(mid1==-1)?INT_MAX:a1[mid1];
        int max1=(mid1==n-1)?INT_MIN: a1[mid1+1];
        int min2=(mid2==-1)?INT_MAX: a2[mid2];
        int max2=(mid2==n-1)?INT_MIN: a2[mid2+1];

        if(min1>=max2 && min2>=max1)
           {
            if((n+m)%2==0)
             return (min(max1,max2)+max(min1,min2))/2;
            else return max(min1,min2);
           }
        else if(max2>min1)
                end=mid1-1;
             else begin=mid1+1;
    }
  return -1;
}
int main()
{   int a[]={2,1},b[]={4,3,2},n=2,m=3;
    cout<<getMedian(a,n,b,m);
    return 0;
}