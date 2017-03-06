#include <iostream>
#include <cstring>
using namespace std;
#define LL long long
LL max(LL a,LL b)
{
	return a>b?a:b;
}
int main()
{
	int t,n,p;
	cin>>t;
	p=1;
	while(p<=t)
	{
		cin>>n;
		if(n==0)
		{
			cout<<"Case "<<p<<": "<<"0"<<endl;
			return 0;
		}
		LL dp[n+1];
		memset(dp,0,(n+1)*sizeof(int));
		int k;
		for(int i=1;i<=n;i++)
		{
			cin>>k;
			dp[i]=max(i>1?dp[i-1]:0,(i>2?dp[i-2]:0)+k);
		}
		cout<<"Case "<<p<<": "<<dp[n]<<endl;
		p++;
	}
	return 0;
}