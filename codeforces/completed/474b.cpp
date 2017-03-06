#include <iostream>
using namespace std;
int binarySearch(int arr[],int query,int n)
{
	int l,mid,h,index;
	l=0;
	h=n-1;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(arr[mid]<query)
		{
			l=mid+1;
		}
		else if(query<=((mid-1>=0)?arr[mid-1]:0))
		{
			h=mid-1;
		}
		else
		{
			index=mid;
			break;
		}
	}
	return index+1;
}
int main()
{
	int n,sum=0,t,worm;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum=sum+t;
		arr[i]=sum;
	}
	cin>>t;
	while(t--)
	{
		cin>>worm;
		cout<<binarySearch(arr,worm,n)<<endl;
	}
	return 0;
}