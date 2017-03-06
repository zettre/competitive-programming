#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	int inc=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>k)
		{
			inc+=arr[i]-k;
			k+=arr[i]-k;
		}
	}
	cout<<inc<<endl;
	return 0;
}