#include <iostream>
using namespace std;
long long int C(int m,int n)
{
	if(n>m-n) n=m-n;
	long long int ans=1;
	for(int i=0;i<n;i++)
	{
		ans=ans*(m-i)/(i+1);
	}
	return ans;
}
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<C(n-1,k-1)<<endl;
	}
	return 0;
}