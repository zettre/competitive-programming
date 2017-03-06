#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,way,b;
	cin>>n;
	vector <int> ci;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		ci.push_back(b);
	}
	sort(ci.begin(),ci.end());
	if(ci[0]==ci[1])
	{
		way=n;
	}
	else
	{
		way=1;
	}
	ci[0]=ci[0]*2;
	sort(ci.begin(),ci.end());
	cout<<ci[0]<<" "<<way;
	return 0;
}