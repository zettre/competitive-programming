#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> primes;
vector<int> leastPrimeDivisor;
void generatePrimes()
{
	leastPrimeDivisor.push_back(1);
	leastPrimeDivisor.push_back(2);
	primes.push_back(2);
	leastPrimeDivisor.push_back(3);
	primes.push_back(3);
	for(int i=4;i<=1000000;i++)
	{
		int flag=0;
		int p=0;
		int l=sqrt(i); 
		while(primes[p]<=l)
		{
			if(i%primes[p]==0)
			{
				flag=1;
				leastPrimeDivisor.push_back(primes[p]);
				break;
			}
			p++;
		}
		if(flag==0)
		{
			leastPrimeDivisor.push_back(i);
			primes.push_back(i);
		}
	}
}
void update(int l,int r,int arr[])
{
	int i=l;
	while(i<=r)
	{
		arr[i]=arr[i]/leastPrimeDivisor[arr[i]-1];
		i++;
	}
}
int get(int l,int r,int arr[])
{
	int i=l;
	int result=1;
	while(i<=r)
	{
		result=max(result,leastPrimeDivisor[arr[i]-1]);
		i++;
	}
	return result;
}
int main()
{
	generatePrimes();
	int n,m;
	int t,o,l,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<m;i++)
		{
			cin>>o>>l>>r;
			if(o==0) update(l-1,r-1,arr);
			if(o==1) cout<<get(l-1,r-1,arr)<<" ";
		}
		cout<<endl;
	}
	return 0;
}