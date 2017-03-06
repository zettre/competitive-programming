#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char s[101];
	scanf("%s",s);
	char waste;
	scanf("%c",&waste);
	int flag=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			flag=1;
			break;
		}
	}
	if(flag==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}