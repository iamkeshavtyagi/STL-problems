#include<iostream>
#include<string>
using namespace std;
int main(){
    char a[11],b[10];
    int n;
    cin>>n;
    while(n--){
    cin.getline(a,11);
    cin.getline(b,10);

        cout<<strstr(a,b) ? "1\n" : "0\n";
    }
    return 0;
}
