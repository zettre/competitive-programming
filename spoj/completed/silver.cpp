#include <iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	while(n)
	{
		int ans=0;
		while(n>1)
		{
			n=n>>1;
			ans++;
		}	
		printf("%d\n",ans);
		scanf("%d",&n);
	}
	return 0;
}