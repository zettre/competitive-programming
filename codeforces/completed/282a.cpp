#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char s[4],waste;
	int x=0;
	while(t--)
	{
		scanf("%s",s);
		scanf("%c",&waste);
		if(s[1]=='+') x++;
		if(s[1]=='-') x--;
	}
	cout<<x;
	return 0;
}