#include <iostream>
using namespace std;
int main()
{
	int h,w,t;
	cin>>t;
	while(t--)
	{
		cin>>h>>w;
		int arr[h+9][w+9];
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				cin>>arr[i][j];
			int ma=-1,i,j;
			for(i=0;i<w;i++)
				ma=max(ma,arr[0][i]);
			for(i=1;i<h;i++)
			{
				ma=-1;
				for(j=0;j<w;j++)
				{
					if(j>0 && j<w-1)
						arr[i][j]=max(max(arr[i][j]+arr[i-1][j-1],arr[i][j]+arr[i-1][j]),arr[i][j]+arr[i-1][j+1]);
					else if(j==0)
						arr[i][j]=max(arr[i][j]+arr[i-1][j+1],arr[i][j]+arr[i-1][j]);
					else
						arr[i][j]=max(arr[i][j]+arr[i-1][j-1],arr[i][j]+arr[i-1][j]);
					ma=max(ma,arr[i][j]);
				}
			}
			cout<<ma<<endl;
	}
	return 0;	
}
