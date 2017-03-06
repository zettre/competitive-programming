#include <iostream>
#include <set>
using namespace std;
int main()
{
	int q,n,m,no,temp,qi;
	cin>>q;
	while(q--)
	{
	cin>>n>>m;
	vector< vector < int > > dep;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		for(int j=0;j<no;j++)
		{
			cin>>temp;
			dep[i].push_back(temp);
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>qi;
		
	}
	} 
	return 0;
}