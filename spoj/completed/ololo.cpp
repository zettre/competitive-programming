#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t,p,ans=0;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d",&p);
		ans^=p;
	}
	printf("%d\n",ans);
	return 0;
}