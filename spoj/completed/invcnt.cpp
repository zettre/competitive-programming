#include <iostream>
using namespace std;
#define MAX 200006
int arr[MAX];
int temp[MAX];
long long int merge(int arr[],int temp[],int l,int mid,int h)
{
	long long int count=0;
int i=l,j=mid,k=l;
while(i<=mid-1 && j<=h)
{
	if(arr[i]<=arr[j])
	{
		temp[k++]=arr[i++];
	}
	else
	{
		temp[k++]=arr[j++];
		count+=mid-i;
	}
}
while(i<=mid-1)
{
	temp[k++]=arr[i++];
}
while(j<=h)
{
	temp[k++]=arr[j++];
}
for(int i=l;i<=h;i++)
{
	arr[i]=temp[i];
}
return count;
}
long long int mergeSort(int arr[],int temp[],int l,int h)
{
long long int count=0;
if(l<h)
{
	int mid=(l+h)/2;
	count+=mergeSort(arr,temp,l,mid);
	count+=mergeSort(arr,temp,mid+1,h);
	count+=merge(arr,temp,l,mid+1,h);
}
return count;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<mergeSort(arr,temp,0,n-1)<<endl;
	}
	return 0;
}