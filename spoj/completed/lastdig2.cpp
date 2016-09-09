#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int t,a;
	string s;
	unsigned long long int b,d;
	cin>>t;
	while(t--)
	{
		cin>>s>>b;
		a=s[s.length()-1]-'0';
		if(b==0)
		{
			cout<<"1"<<endl;
			continue;
		}
		if(a%10==0 || a%10==1 || a%10==5 || a%10==6)
		{
			cout<<a%10<<endl;
			continue;
		}
		
		d=b%4;
		if(d==0)
		{
			b=pow(a%10,4);
			b%=10;
		}
		else if(d==1)
		{
			b=a%10;
		}
		else if(d==2)
		{
			b=pow(a%10,2);
			b%=10;
		}
		else
		{
			b=pow(a%10,3);
			b%=10;
		}
		cout<<b<<endl;
	}
	return 0;
}