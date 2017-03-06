#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int cap=0,i=1,ent,exi,res=0;
	while(i<=n)
	{
		cin>>exi;
		cap-=exi;
		cin>>ent;
		cap+=ent;
		if(res<cap) res=cap;
		i++;
	}
	cout<<res;
	return 0;
}