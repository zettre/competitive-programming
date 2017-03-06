#include <iostream>
using namespace std;
int main()
{
	int w,n;
	cin>>w>>n;
	while(w && n)
	{
		int cost[n],fun[n];
		for(int i=0;i<n;i++)
			cin>>cost[i]>>fun[i];
		int ks[n+1][w+1];
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=w;j++)
			{
				if(i==0 || j==0)
				{
					ks[i][j]=0;
				}
				else if(cost[i-1]<=j)
				{
					if(ks[i-1][j]>=ks[i-1][j-cost[i-1]]+fun[i-1])
					{
						ks[i][j]=ks[i-1][j];
					}
					else
					{
						ks[i][j]=ks[i-1][j-cost[i-1]]+fun[i-1];
					}
				}
				else
				{
					ks[i][j]=ks[i-1][j];
				}
			}
		}
		int ans=-1;
		for(int i=0;i<=w;i++)
		{
			if(ks[n][i]==ks[n][w])
			{
				ans=i;
				break;
			}
		}
		cout<<ans<<" "<<ks[n][w]<<endl;
		cin>>w>>n;
	}
	return 0;
}