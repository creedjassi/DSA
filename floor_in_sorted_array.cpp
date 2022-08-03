#include<iostream>
using namespace std;
int floorCalculate(int arr[],int n, int k)
{   int l=0,h=n-1;
    while(l<=h)
    {   int mid=(l+h)/2;
        if(arr[mid]<=k && arr[mid+1]>k)
           return mid;
        else if(arr[mid]>k)
                h=mid-1;
             else l=mid+1;
    }
    if(arr[n-1]<k)
       return n-1;
    return -1;
}
int main()
{   int a[]={63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154},n=92,k=196;
    cout<<floorCalculate(a,n,k);
    return 0;
}