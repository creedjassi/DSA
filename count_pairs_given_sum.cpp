#include<iostream>
using namespace std;
int countPairs(int arr[],int n,int x)
{
    int left=0,right=n-1,count=0;
    while(left<right)
    {   int temp=arr[left]+arr[right];
        if(temp==x)
           {count+=1;
            /*left+=1;  Not able to figure out the case here of updation
            right-=1;*/
            }
        else if(temp>x)
               right-=1;
             else left+=1; 
    }
    return count;

}
int main()
{
    int n,x;
    cout<<"No. of elements in an array?\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    cout<<"Value of sum?\n";
    cin>>x;
    cout<<countPairs(a,n,x);

    return 0;
}