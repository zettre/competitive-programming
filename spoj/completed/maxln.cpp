#include <iostream>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	i=1;
	while(i<=t)
	{
		long long int r;
		cin>>r;
		long long int s=4*r*r;
		cout<<"Case "<<i<<": "<<s<<".25"<<endl;
		i++;
	}
	return 0;
}