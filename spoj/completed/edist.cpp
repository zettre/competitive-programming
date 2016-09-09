#include <iostream>
#include <cstring>
using namespace std;
int dp[2006][2006];
int main()
{
	int t;
	cin>>t;
	string a,b;
	int alen,blen;
	while(t--)
	{
		cin>>a>>b;
		alen=a.length();
		blen=b.length();
		memset(dp,0,sizeof(dp[0][0])*(alen+1)*(blen+1));
		for(int i=0;i<=alen;i++)
			dp[i][0]=i;
		for(int i=0;i<=blen;i++)
			dp[0][i]=i;
		for(int i=1;i<=alen;i++)
		{
			for(int j=1;j<=blen;j++)
			{
				if(a[i-1]==b[j-1])
				{
					dp[i][j]=dp[i-1][j-1];
				}
				else
				{
					dp[i][j]=min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
				}
			}
		}
		cout<<dp[alen][blen]<<endl;
	}
	return 0;
}