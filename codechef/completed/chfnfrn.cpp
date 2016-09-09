#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t,n,pairs,u,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>pairs;
		vector<int> adj[n];
		vector<int> t1,t2;
		for(int i=1;i<=pairs;i++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
	}
	return 0;
}