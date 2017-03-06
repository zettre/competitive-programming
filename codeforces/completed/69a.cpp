#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k;
	int x=0,y=0,z=0;
	for(int p=0;p<n;p++)
	{
		cin>>i>>j>>k;
		x=x+i;
		y=y+j;
		z=z+k;
	}
	if(x==0 && y==0 && z==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}