#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
        arr[i]=arr[i]*arr[i];

         }
        sort(arr,arr+n);

        for(int i=n-1;i>=2;i--){//Fixing a
            int b=0;//Fixing b
            int c=i-1;//Fixing c
            while(b<c){
                if(arr[b]+arr[c]==arr[i]){
                    cout<<"Yes"<<endl;
                    b++;
                    c--;
                }
                //Else either move 'b' or 'c'
                else if(arr[b]+arr[c]<arr[i]){
                    b++;
                }
                else{
                    c--;
                }
            }
        }
    }
}

