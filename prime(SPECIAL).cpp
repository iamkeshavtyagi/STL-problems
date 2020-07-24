#include<iostream>
using namespace std;

int prime(long long n)
{
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        long long n;
        cin>>n;
        int ans= prime(n);
        if(ans)
        {
            cout<<"Yes"<<endl;
        }
        else
            {
            cout<<"No"<<endl;
            }
    }
    return 0;
}
