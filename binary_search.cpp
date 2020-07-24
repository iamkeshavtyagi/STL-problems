#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,11,23,34,45,65};
    int n=sizeof(arr)/sizeof(int);

    //Search in a Sorted array

    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";

    }
    else
    {
        cout<<"Absent!";
    }
    return 0;
}
