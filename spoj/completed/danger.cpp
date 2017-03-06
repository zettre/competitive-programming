#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char str[5],waste;
	scanf("%s",str);
	int n=(str[0]-'0')*10+(str[1]-'0');
	for(int i=0;i<str[3]-'0';i++)
	{
		n*=10;
	}
	scanf("%c",&waste);
	int d,t,ans;
	while(n)
	{
		ans=1;
		d=1;
		while(d<=n)
		{
			d<<=1;
		}
		ans=((n-(d/2))*2)+1;
		printf("%d\n",ans);
		scanf("%s",str);
		n=(str[0]-'0')*10+(str[1]-'0');
		for(int i=0;i<str[3]-'0';i++)
		{
			n*=10;
		}
		scanf("%c",&waste);
	}

	return 0;
}