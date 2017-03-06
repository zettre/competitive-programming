#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t,count1=0,count2=0,count3=0,a,c,count=0;
	char b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a==3) count3++;
		else if(c==2) count2++;
		else count1++;
	}
	count=count3;
	count1=count1-count3;
	count+=(count2-count2%2)/2;
	count2=count2%2;
	if(count2>0)
	{
		count++;
		count1-=2;
	}
	if(count1>0)
	{
		count+=(count1-count1%4)/4;
		count1=count1%4;
		if(count1>0)
		{
			count++;
		}
	}
	cout<<count+1<<endl;
	return 0;
}