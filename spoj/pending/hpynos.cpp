#include <iostream>
using namespace std;
long long int getSumOfSq(long long int n)
{
	long long int s=0,d;
	while(n>0)
	{
		d=n%10;
		s+=d*d;
		n/=10;
	}
	return s;
}
int main()
{
	long long int n,t,count=0;
	cin>>n;
	long long int s=n;
	
	while(s>9)
	{
		s=getSumOfSq(s);
		count++;
	}
	if(s==1) cout<<count<<endl;
	else cout<<"-1"<<endl;
	return 0;
}