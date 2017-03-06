#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	char arr[101];
	scanf("%s",arr);
	char waste;
	scanf("%c",&waste);
	int count=1,flag=0;
	for(int i=1;i<strlen(arr);i++)
	{
		if(arr[i]==arr[i-1]) count++;
		else count=1;
		if(count==7)
		{
			flag=1;
			break;
		} 
	}
	if(flag==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}