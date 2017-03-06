#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,angle;
	cin>>t;
	while(t--)
	{
		cin>>angle;
		if(360%(180-angle)==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}