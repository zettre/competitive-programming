#include <iostream>
#include <map>
#include <cstdio>
#include <set>
#include <cstring>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<string,int> acc;
		map<string,int>::iterator it;
		char str[40];
		for (int i=0;i<n;i++)
		{
			gets(str);
			acc[(string)str]++;
		}
		for(it=acc.begin();it!=acc.end();it++)
		{
			printf("%s %d\n",it->first.c_str(),it->second);
		}
		cout<<endl;
	}
	return 0;
}