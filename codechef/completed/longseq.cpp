#include <iostream>
using namespace std;
int main()
{
	string digits;
	int t,one,zero;
	cin>>t;
	while(t--)
	{
		cin>>digits;
		one=0;zero=0;
		for(int i=0;i<digits.length();i++)
		{
			if(digits[i]=='0') zero++;
			if(digits[i]=='1') one++;
		}
		if(one==1 || zero==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}