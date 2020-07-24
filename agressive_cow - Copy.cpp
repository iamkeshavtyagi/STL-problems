#include <iostream>
#include<algorithm>
using namespace std;

bool canPlaceCows(long long int stalls[], long long int n,long long int c,int min_sep){

    int last_cow=stalls[0];
    //Place the first cow in the first stall
    int cnt=1;

    for(int i=1;i<n;i++){
        if(stalls[i]-last_cow >= min_sep){
            last_cow=stalls[i];
            cnt++;
            if(cnt==c){
                return true;
            }
        }
    }
    return false;
}
int main() {
            //Problem : Aggressive Cows
            int t,ans = 0;;
            cin>>t;
            while(t-->0){
            long long int n,cows;
            cin>>n >>cows;
            long long int stalls[n];
            for(int i=0;i<n;i++){
                cin>>stalls[i];
            }
            sort(stalls,stalls+n);

            //binary search algorithm
           int s=0;
           int e= stalls[n-1]-stalls[0];


           while(s<=e){
               int mid=(s+e)/2;

               bool cowsRakhPaye = canPlaceCows(stalls, n, cows, mid);
               if(cowsRakhPaye){
                   ans=mid;
                   s= mid+1;
               }
               else {
                   e=mid-1;
               }
           }

            }
           cout<<ans<<endl;
           return 0;
}


