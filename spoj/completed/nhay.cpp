#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void computeLPSArray(string pat,int M,int *lps)
{
	int len=0;
	lps[0]=0;
	int i=1;
	while(i<M)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
}
void KMPSearch(string pat, string txt)
{
	int M=pat.length();
	int N=txt.length();
	int lps[M];
	computeLPSArray(pat,M,lps);
	int i=0,j=0;
	while(i<N)
	{
		if(pat[j]==txt[i])
		{
			i++;
			j++;
		}
		if(j==M)
		{
			cout<<i-j<<endl;
			j=lps[j-1];
		}
		else if(i<N && pat[j]!=txt[i])
		{
			if(j==0)
			{
				i++;
			}
			else
			{
				j=lps[j-1];
			}
		}
	}
}
int main()
{
	int m;
  bool first = true;
  while (scanf("%d",&m)==1) {
    if (!first) puts("");
    first = false;
 
    string needle; 
    getline(cin, needle);
    getline(cin, needle);
    string haystack;
    getline(cin, haystack);
    KMPSearch(needle, haystack);
  }return 0;
}