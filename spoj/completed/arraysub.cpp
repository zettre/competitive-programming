#include <iostream>
using namespace std;
int getMax(int *arr,int l,int h)
{
	int max=arr[l];
	for(int i=l+1;i<=h;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int size,window;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cin>>window;
	int l=0,h=window-1;
	while(h<=size-1)
	{
		cout<<getMax(arr,l,h)<<" ";
		l++;
		h++;
	}
	return 0;
}