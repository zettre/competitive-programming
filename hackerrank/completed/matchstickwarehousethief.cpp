#include <iostream>
using namespace std;
int main()
{
	int n,c,t,u;
	cin>>n>>c;
	int arr[2][c];
	for(int i=0;i<c;i++)
	{
		cin>>arr[0][i]>>arr[1][i];
	}
	for(int i=0;i<c-1;i++)
	{
		for(int j=i+1;j<c;j++)
		{
			if(arr[1][j]>arr[1][i])
			{
				t=arr[1][j];
				u=arr[0][j];
				arr[1][j]=arr[1][i];
				arr[0][j]=arr[0][i];
				arr[1][i]=t;
				arr[0][i]=u;
			}
		}
	}
	int sum=0,crates=0;
	for(int i=0;i<c;i++)
	{
		if(arr[0][i]+crates>n)
		{
			sum=sum+((n-crates)*arr[1][i]);
			break;
		}
		crates=crates+arr[0][i];
		sum=sum+(arr[0][i]*arr[1][i]);
	}
	cout<<sum;
	return 0;
}