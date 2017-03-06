#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char s[101],waste;
	scanf("%s",s);
	scanf("%c",&waste);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
		{

		}
		else
		{
			if(s[i]>=65 && s[i]<=90) s[i]+=32;
			cout<<"."<<s[i];
		}
	}
	return 0;
}