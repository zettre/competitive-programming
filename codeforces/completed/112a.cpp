#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char s1[101],s2[101];
	char waste;
	scanf("%s",s1);
	scanf("%c",&waste);
	scanf("%s",s2);
	scanf("%c",&waste);
	int res=0;
	for(int i=0;i<strlen(s1);i++)
	{
		if(s1[i]>=65 && s1[i]<=90)
		{
			s1[i]+=32;
		}
		if(s2[i]>=65 && s2[i]<=90)
		{
			s2[i]+=32;
		}
		if(s1[i]==s2[i])
		{
			res=0;
		}
		else if(s1[i]>s2[i])
		{
			res=1;
			break;
		}
		else
		{
			res=-1;
			break;
		}
	}
	cout<<res;
	return 0;
}