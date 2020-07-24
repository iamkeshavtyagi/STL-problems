#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int arr[]={1,11,23,45,43};
    int n= sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    //This find function return the address of the key
    auto it = find(arr,arr+n,key);

    //To find the address Or INDEX we have to subtract the address to base address

    int index=it-arr;
    if(index==n){
        cout<<key<<" not present";
    }
    else{
        cout<<"Present at index "<<index;
    }
    return 0;
}
