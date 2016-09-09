#include <iostream>
using namespace std;
int main()
{
	int t;
	long long int k,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		k=(2*n*(n+1)/2)+(n*(n-1)/2);
		cout<<k%1000007<<endl;
	}
	return 0;
}