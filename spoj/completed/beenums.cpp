#include <iostream>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		cin>>n;
		if(n==-1) break;

		if((n-1)%6==0)
		{
			int i;
			for(i=0;i<=n/6;i++)
			{
				if(3*i*(i+1)+1==n)
				{
					cout<<"Y"<<endl;
					break;
				}
			}
			if(i==n/6+1)
			{
				cout<<"N"<<endl;
			}
		}
		else
		{
			cout<<"N"<<endl;
		}

	}
}