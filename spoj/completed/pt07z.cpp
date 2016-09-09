#include <iostream>
#include <vector>
using namespace std;
#define MAX 100009
bool visited[MAX]={false};
int total=0;
int dfs(vector<int> v[],int root)
{
	int m,m1=-1,m2=-1;
	visited[root]=true;
	for(int i=0;i<v[root].size();i++)
	{
		if(!visited[v[root][i]])
		{
		m=dfs(v,v[root][i]);
		if(m>=m1)
		{
			m2=m1;
			m1=m;
		}
		else if(m>m2)
		{
			m2=m;
		}
		}
	}
	total=max(total,m1+m2+2);
	return m1+1;
}
int main()
{
	int n,p,w;
	cin>>n;
	vector<int> v[n+1];
	for(int i=1;i<n;i++)
	{
		cin>>p>>w;
		v[p].push_back(w);
		v[w].push_back(p);
	}
	dfs(v,1);
	cout<<total<<endl;
	return 0;
} 