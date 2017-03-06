#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int arr[t];
	memset(arr,0,sizeof(arr[0])*t);
	int i=0,count=0;
	while(i<t)
	{
		cin>>n;
		if(n==1) arr[i]++;
		cin>>n;
		if(n==1) arr[i]++;
		cin>>n;
		if(n==1) arr[i]++;		
		if(arr[i]>=2) count++;
		i++;
	}
	cout<<count;
	return 0;
}