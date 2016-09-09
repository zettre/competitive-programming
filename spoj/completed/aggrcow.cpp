#include <iostream>
#include <algorithm>
using namespace std;
int n,c;
int reqDist(int arr[],int num)
{
	int cows=1,pos=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]-pos>=num)
		{
			pos=arr[i];
			cows++;
			if(cows==c)
				return 1;
		}
	}
	return 0;
}
int binarySearch(int arr[])
{
	int ini=0,last=arr[n-1],max=-1;
	while(last>ini)
	{
	int mid=(ini+last)/2;
	if(reqDist(arr,mid)==1)
	{
		if(mid>max) max=mid;
		ini=mid+1;
	}
	else
		last=mid;
	}
	return max;
}
int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int k=binarySearch(arr);
		cout<<k<<endl;
	}

	return 0;
}