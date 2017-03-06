#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int posibleX[8]={-1,0,1,0,-1,1,-1,1};
	int posibleY[8]={0,-1,0,1,-1,1,1,-1};
	int n,o;
	cin>>n>>o;
	int arr[n][n];
	memset(arr,0,sizeof(int)*n*n);
	int x,y,p,q;
	cin>>x>>y;
	arr[x-1][y-1]=1;
	for(int i=0;i<o;i++)
	{
		cin>>p>>q;
		arr[p-1][q-1]=-1;
	}
	int sum=0;
	for(int i=0;i<8;i++)
	{
		p=x-1; q=y-1;
		while(1)
		{
			p+=posibleX[i];
			q+=posibleY[i];
			if(p<0 || p>=n || q<0 || q>=n)
			{
				break;
			}
			if(arr[p][q]==-1)
			{
				break;
			}
			sum++;
		}
	}
	cout<<sum;
	return 0;
}