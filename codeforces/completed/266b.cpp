#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	char arr[n+1],waste;
	scanf("%s",arr);
	scanf("%c",&waste);
	while(t--)
	{
	int i=1;
	while(i<n)
	{
		if(arr[i]=='G' && arr[i-1]=='B')
		{
			arr[i]='B';
			arr[i-1]='G';
			i++;
		}
		i++;
	}
	}
	cout<<arr<<endl;
	return 0;
}