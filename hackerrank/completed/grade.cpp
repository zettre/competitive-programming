#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>=38)
		{
			if(n%5!=0)
			{
				int round=((n/5)+1)*5;
				if((round-n)<3)
				{
					n=round;
				}
			}
		}
		cout<<n<<endl;
	}
	return 0;
}