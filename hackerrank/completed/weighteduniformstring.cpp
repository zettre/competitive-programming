#include <iostream>
#include <set>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int t,n,sum;
	set<int> l;
	sum=0;
	for(int i=0;i<s.length();i++)
		{
			sum+=s[i]-96;
			l.insert(sum);
			if(s[i]!=s[i+1])
			{
				sum=0;
			}

		}
		
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(l.count(n))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}