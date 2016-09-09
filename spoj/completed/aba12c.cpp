#include <iostream>
using namespace std;
#define INT_MAX 2000000000
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int p[k+1];
		for(int i=1;i<k+1;i++)
			cin>>p[i];
		int ans[k+1];
		for(int i=1;i<=k;i++)
		{
				ans[i]=p[i];
		}
		for(int i=2;i<=k;i++)
		{
			for(int j=1;j<i;j++)
			{
				if(p[i-j]==-1 || ans[j]==-1) continue;
				if(ans[i]==-1)
					ans[i]=ans[j]+p[i-j];
				else
					ans[i]=min(ans[i],ans[j]+p[i-j]);
			}
		}
		if(k==0) cout<<"0"<<endl;
		else cout<<ans[k]<<endl;

	}
	return 0;
}