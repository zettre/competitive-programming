#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,d;
	while(1)
	{
		cin>>a>>d;
		if(a==0 && d==0) break;
		int att[a],def[d];
		for(int i=0;i<a;i++)
			cin>>att[i];
		for(int i=0;i<d;i++)
			cin>>def[i];
		sort(att,att+a);
		sort(def,def+d);
		if(att[0]<def[1])
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}