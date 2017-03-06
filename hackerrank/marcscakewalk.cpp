#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long int miles=0;
	for(int i=n-1;i>=0;i--)
	{
		miles=miles+(pow(2,n-i-1)*arr[i]);
	}
	cout<<miles;
	return 0;
}