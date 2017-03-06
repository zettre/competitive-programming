#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max,curmax;
	max=0;curmax=0;
	int i=0,f=0,l=0;
	while(i<n)
	{
		curmax=curmax+arr[l];
		if(curmax>=max && curmax<=m)
		{
			max=curmax;
			break
		}
		i++;
	}

	return 0;
}