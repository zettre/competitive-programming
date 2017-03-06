#include <iostream>
using namespace std;
int getMax(int *arr,int l)
{
	int max=0;
	for(int i=1;i<=l;i++)
	{
		if(arr[i]>arr[max])
		{
			max=i;
		}
	}
	return max;
}
int main()
{
	int f,l,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		l=n-1;
		int count=0;
		while(l>=0)
		{
			l=getMax(arr,l)-1;
			count++;
		}
		if(count%2==0)
		{
			cout<<"ANDY"<<endl;
		}
		else
		{
			cout<<"BOB"<<endl;
		}
	}
	return 0;
}