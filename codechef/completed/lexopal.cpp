#include <iostream>
using namespace std;
int main()
{
	string s;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int len =s.length();
		int i=0,j=len-1;
		while(i<=j)
		{
			if(s[i]!=s[j])
			{
				if(s[i]=='.') s[i]=s[j];
				if(s[j]=='.') s[j]=s[i];
			}
			else if(s[i]=='.')
			{
				s[i]=s[j]='a';
			}
			
			if(s[i]!=s[j]) break;
			
			i++;
			j--;
		}
		if(i>j) cout<<s<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}