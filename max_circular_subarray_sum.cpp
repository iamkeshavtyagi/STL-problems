#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
   int arr[n];
   //int sum=0;
   for(int i=0;i<n;i++){
      cin>>arr[i];
      //sum=sum+arr[i];
   }

    int m=n+1;
    int total=m*(m+1)/2;

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<total-sum;
    }
  return 0;
}
