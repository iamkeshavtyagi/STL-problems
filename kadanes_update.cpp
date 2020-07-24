#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int max,end=0;
	    for(int i=0;i<n;i++)
	    {
	      cin>>a[i];
	      if(i==0)
	        max=a[i];
	      end=end+a[i];
	      if(max<end) max=end;
	      if(end<0) end=0;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
