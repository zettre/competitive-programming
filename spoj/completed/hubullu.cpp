#include <iostream>
using namespace std;
int main()
{
	int n,j,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>j;
		if(j)
		{
			cout<<"Pagfloyd wins."<<endl;
		}
		else
		{
			cout<<"Airborne wins."<<endl;
		}
	}

	return 0;
}