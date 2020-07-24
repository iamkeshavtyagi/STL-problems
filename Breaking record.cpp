#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T-->0){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){

        cin>>arr[i];

    }
sort(arr,arr+n);
   int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max++;
        }
        else{
            i++;
        }
}

    cout<<max<<" ";
}
    return 0;

}
