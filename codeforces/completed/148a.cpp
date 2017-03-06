#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int d,k,l,m,n;
	cin>>k>>l>>m>>n>>d;
	int arr[d];
	memset(arr,0,sizeof(arr[0])*d);
	int count=0;
	for(int i=0;i<d;i++)
	{
		if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0)
		{
			if(arr[i]==0)
			{
			arr[i]=1;
			count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}