#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
	int n,t,c;
	cin>>n;
	set <int> frnd;
	vector<vector<int> > frnds(n);
	set <int> newone;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		frnd.insert(t);
		cin>>c;
		for(int j=0;j<c;j++)
		{
			cin>>t;
			frnds[i].push_back(t);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<frnds[i].size();j++)
		{
			if(frnd.count(frnds[i][j])==0)
			{
				newone.insert(frnds[i][j]);
			}
		}
	}
	cout<<newone.size()<<endl;
	return 0;
}
