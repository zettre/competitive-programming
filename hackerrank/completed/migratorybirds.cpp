#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long arr[6];
	memset(arr,0,6*sizeof(arr[0]));
	int n;
	while(t--)
	{
		cin>>n;
		arr[n]++;
	}
	int max=5;
	for(int i=4;i>=1;i--)
	{
		if(arr[max]<=arr[i]) max=i;
	}
	cout<<max;
	return 0;
}