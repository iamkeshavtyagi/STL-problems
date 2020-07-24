#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={20,30,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }
    else
    {
        cout<<"Absent!";
    }

    auto it=lower_bound(arr,arr+n,key);
    cout<<endl<<"lower bound of key"<<(it-arr)<<endl;

    auto it=upper_bound(arr,arr+n,key);
    cout<<endl<<"upper bound of 40 is"<<(it-arr)<<endl;

    cout<<"Occurance of 40 is "<<(ub-lb)<<endl;

    return 0;
    
}