#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,n,l;
	char c;
	string s;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    cin>>s;
	    for(int i=0;i<=n-1;i+=2)
	    {
	        c=s[i];
	        s[i]=s[i+1];
	        s[i+1]=c;
	    }
	    for(int i=0;i<n;i++)
	    {
	        l=s[i] - 'a';
	        s[i]= 'z' - l;
	    }
	    cout<<endl<<s;
	    t--;
	}
	return 0;
}
