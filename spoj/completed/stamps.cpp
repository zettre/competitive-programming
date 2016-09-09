#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	i=1;
	int req;
	int n;
	while(i<=t)
	{
		cin>>req>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+n);
		int p=n-1;
		long int sum=0;
		while(p>=0)
		{
			sum=sum+arr[p];
			if(sum>=req) break;
			p--;
		}
		if(p<0)
		{
			cout<<"Scenario #"<<i<<":"<<endl;
			cout<<"impossible"<<endl<<endl;
		}
		else
		{
			cout<<"Scenario #"<<i<<":"<<endl;
			cout<<n-p<<endl<<endl;
		}
		i++;
	}
	return 0;
}