#include <iostream>
using namespace std;
int main()
{
	int a,b,c,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		int distA=a>c?a-c:c-a;
		int distB=b>c?b-c:c-b;
		if(distA==distB)
		{
			cout<<"Mouse C"<<endl;
		}
		else if(distA>distB)
		{
			cout<<"Cat B"<<endl;
		}
		else
		{
			cout<<"Cat A"<<endl;
		}
	}
	return 0;
}