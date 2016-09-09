#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
	int t,n,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int player[n+1][2];
		for(int i=1;i<=n;i++)
		{
			cin>>player[i][0];
			int cookies[7]={0};
			
			for(int j=1;j<=player[i][0];j++)
			{
				cin>>d;
				cookies[d]++;
				
			}
			sort(cookies+1,cookies+7);
			if(cookies[1]!=0)
			{
				player[i][1]=player[i][0]+cookies[1]*4;
			}
			else if(cookies[2]!=0)
			{
				player[i][1]=player[i][0]+cookies[2]*2;
			}
			else if(cookies[3]!=0)
			{
				player[i][1]=player[i][0]+cookies[3];
			}
			else
			{
				player[i][1]=player[i][0];
			}
		}
		int lar=1,seclar;
		for(int k=2;k<=n;k++)
		{
			if(player[k][1]>player[lar][1])
			{
				lar=k;
			}

		}
		seclar=0;
		player[0][1]=0;
		for(int k=1;k<=n;k++)
		{
			if(player[k][1]>player[seclar][1] && k!=lar)
			{
				seclar=k;
			}
		}
		if(player[lar][1]==player[seclar][1]) cout<<"tie"<<endl;
		else if(lar==1) cout<<"chef"<<endl;
		else cout<<lar<<endl;
	}
	return 0;
}