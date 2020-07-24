#include <iostream>
#include<cmath>
using namespace std;

int nextPalindromeGenerate(int n)
    {
       int ans=1, digit, rev_num=0, num;
    if(n<10)
        {
            ans=0;
			return n+1;
        }
        num=n;
        while(ans!=0)
        {   rev_num=0;digit=0;
            n=++num;

            while(n>0)
            {
                digit=n%10;
                rev_num=rev_num*10+digit;
                n=n/10;
            }
            if(rev_num==num)
            {
                ans=0;
				return num;
            }
            else ans=1;
        }
		return num;
    }
  int main()
  {
  int t;
  cin>>t;
  while(t-->0){
  	{
       int n;
       cin>>n;
       if (n>0);
		{
int num = nextPalindromeGenerate(n);
cout<<num<<endl;
		}

  }
  	return 0;
     }
  }
