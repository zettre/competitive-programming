#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t];
	int sum=0;
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	sort(arr,arr+t);
	int count=0,s=0;
	for(int i=t-1;i>=0;i--)
	{
		s=s+arr[i];
		count++;
		if(s>(sum/2)) break;
	}
	cout<<count<<endl;
	return 0;
}