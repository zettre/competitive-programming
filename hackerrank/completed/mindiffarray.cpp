#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
	int t,min=INT_MAX,diff;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+t);
	for(int i=1;i<t;i++)
	{
		diff=arr[i]-arr[i-1];
		if(diff<min) min=diff;
	}


	cout<<min<<endl;
	return 0;
}