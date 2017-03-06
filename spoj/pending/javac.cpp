#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string word;
	int len;
	bool j,c;
	while(cin>>word)
	{
		j=c=true;
		len=word.length();
		if(!islower(word[0]))
			j=c=false;
			for(int i=1;i<len;i++)
			{
				if(!isalpha(word[i]))
					j=false;
				if(word[i]=='_')
				{
					if(!islower(word[i+1])) c=false;
				}
				else if(!islower(word[i])) c=false;
			}
			if(!j && !c)
			{
				cout<<"Error"<<endl;
			}
			else if(j && c)
			{
				cout<<word<<endl;
			}
			else if(j && !c)
			{
				cout<<word[0];
				for(int i=1;i<len;i++)
				{
					if(isupper(word[i]))
						cout<<"_"<<tolower(word[i]);
					else
						cout<<word[i];
				}
			}
			else
			{
				cout<<word[0];
				for(int i=1;i<len;i++)
				{
					if(word[i]=='_')
					{
						cout<<toupper(word[i+1]);
						i+=2;
					}
					else
						cout<<word[i];

				}

			}
			cout<<endl;
	}
	return 0;
}