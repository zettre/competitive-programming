#include <iostream>
using namespace std;
int main()
{
	int t,n; long profit,max;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		profit=0;
		max=arr[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(arr[i]<max)
			{
				profit+=(max-arr[i]);
			}
			else
			{
				max=arr[i];
			}
		}
		cout<<profit<<endl;
	}
	return 0;	
}