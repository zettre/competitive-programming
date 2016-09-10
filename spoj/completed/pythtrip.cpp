#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t,a,b,n,sq;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		n=a*a+b*b;
		sq=sqrt(n);
		if(n==sq*sq)
		{
			cout<<"YES "<<sq<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}