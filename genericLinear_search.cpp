#include<iostream>
using namespace std;
//Linear Search
template<typename T>
int search(T arr[],int n,T key)
{
    for(int p=0;p<n;p++){
        if(arr[p] == key){
            return p;
        }
    }
    return n;
}

int main(){
float b[]={1.1,1.2,1.3};
float k = 1.2;
cout<<search(b,3,k)<<endl;
return 0;
}
