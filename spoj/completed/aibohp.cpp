//longest common subsequence
#include <iostream>
using namespace std;
int LCS(string str1,string str2)
{
	int len1=str1.length();
	int len2=str2.length();
	int lcs[len1+1][len2+1];
	for(int i=0;i<=len1;i++)
	{
		for(int j=0;j<=len2;j++)
		{
			if(i==0 || j==0)
			{
				lcs[i][j]=0;
			}
			else if(str1[i-1]==str2[j-1])
			{
				lcs[i][j]=1+lcs[i-1][j-1];
			}
			else
			{
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
	}
	return lcs[len1][len2];
}
int main()
{
	int t,len,i,j;
	char temp;
	cin>>t;
	string str,rev;
	getline(cin,str);
	while(t--)
	{
		getline(cin,str);
		rev=str;
		len=str.length();
		for(i=0,j=len-1;i<j;i++,j--)
		{
			temp=rev[i];
			rev[i]=rev[j];
			rev[j]=temp;
		}
		cout<<len-LCS(str,rev)<<endl;
	}
	return 0;
}