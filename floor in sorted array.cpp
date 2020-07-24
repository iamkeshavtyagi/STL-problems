#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    int n,key;
	    cin>>n>>key;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]<key){
	            cout<<arr[i];
	            i++;
	            break;
	        }
	     else
                cout<<"-1"<<endl;
                    break;
	    }
	}
	return 0;
}
