// try use moore's voting algorithm (my first guess) it is used for finding only one possible solution
// since we need count of all answers and AUX Space allowed O(n) hence we use unordered_map or dictionary 
#include<iostream> 
#include<unordered_map>
using namespace std;
int countNbyK(int arr[],int n,int k)
{
    unordered_map <int,int> freq;
    for(int i=0;i<n;i++)
        freq[arr[i]]+=1;
    int count=0;
    for(auto i:freq)
       if(i.second>n/k)
          count+=1;
    return count;
}
int main()
{   int arr[]={1,4,4,4},n=4,k=2;
   // long long k=0;
    cout<<countNbyK(arr,n,k);
    return 0;
}