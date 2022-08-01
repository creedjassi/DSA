#include<iostream>
#include<unordered_set>
#include<cmath>
using namespace std;
bool pythogoreanTriplet(float arr[],int n)
{   
    for(int i=0;i<n-1;i++)
      {
       unordered_set <int> s;
       for(int j=i+1;j<n;j++)
           {
            if(s.find(sqrt(arr[i]*arr[i]+arr[j]*arr[j]))!=s.end())
               { 
                    return true;
                }  // find a better solution it has really high time complexity of n^5/2 
            s.insert(arr[j]);
           }

      }
    return false;
}
int main()
{   float a[]={3, 2, 4, 6, 5},n=5;
    cout<<(bool)pythogoreanTriplet(a,n);
    return 0;
}