#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,t;
	cin>>n;
	int arr[n][2];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i][0]>arr[j][0])
			{
				temp=arr[i][0]; t=arr[i][1];
				arr[i][0]=arr[j][0]; arr[i][1]=arr[j][1];
				arr[j][0]=temp; arr[j][1]=t;
			}
		}
	}
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i][1]<=arr[i+1][1] || arr[i][0]>=arr[i+1][0])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Poor Alex"<<endl;
	}
	else
	{
		cout<<"Happy Alex"<<endl;
	}

	return 0;
}