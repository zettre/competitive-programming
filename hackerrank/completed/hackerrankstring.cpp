#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int t,p;
	cin>>t;
	string s="hackerrank";
	char s1[10000];
	char waste;
	while(t--)
	{
		scanf("%s",s1);
		scanf("%c",&waste);
		p=0;
		for(int i=0;i<strlen(s1);i++)
		{
			if(p>8) break;
			if(s[p]==s1[i]) p++;
		}
		if(p>=9) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}