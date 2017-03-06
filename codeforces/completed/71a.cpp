#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char s[101];
	char waste;
	int t,len;
	cin>>t;
	while(t--)
	{
		scanf("%s",s);
		scanf("%c",&waste);
		len=strlen(s);
		if(len>10)
		{
			cout<<s[0]<<len-2<<s[len-1]<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
	return 0;
}