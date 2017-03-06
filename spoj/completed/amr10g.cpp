#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
			sort(arr,arr+n);
		int diff=INT_MAX;
		for(int i=0;i<n-k+1;i++)
		{
			if(arr[i+k-1]-arr[i]<diff) diff=arr[i+k-1]-arr[i];
		}
		cout<<diff<<endl;
	}
}