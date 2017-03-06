#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int freq[4],input;
	memset(freq,0,sizeof(freq[0])*4);
	for(int i=0;i<n;i++)
	{
		cin>>input;
		freq[input-1]++;
	}
	int cnt=0;
	cnt+=freq[3];
	cnt+=freq[2];
	freq[0]-=freq[2];
	cnt+=(freq[1]/2);
	freq[1]-=((freq[1]/2)*2);
	if(freq[1])
	{
		cnt++;
		freq[0]-=2;
	}
	if(freq[0]>0)
	{
		cnt+=freq[0]/4;
		freq[0]-=((freq[0]/4)*4);
		if(freq[0]>0) cnt++;
	}
	cout<<cnt;
	return 0;
}