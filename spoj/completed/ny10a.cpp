#include <iostream>
using namespace std;
int main()
{
	int TTT,TTH,THT,THH,HTT,HTH,HHT,HHH;
	string coins;
	int t,i;
	cin>>t;
	while(t--)
	{
		cin>>i;
		cin>>coins;
		TTT=0;TTH=0;THT=0;THH=0;HTT=0;HTH=0;HHT=0;HHH=0;
		for(int p=0;p<38;p++)
		{
			if(coins.substr(p,3)=="TTT")
				TTT++;
			if(coins.substr(p,3)=="TTH")
				TTH++;
			if(coins.substr(p,3)=="THT")
				THT++;
			if(coins.substr(p,3)=="THH")
				THH++;
			if(coins.substr(p,3)=="HTT")
				HTT++;
			if(coins.substr(p,3)=="HTH")
				HTH++;
			if(coins.substr(p,3)=="HHT")
				HHT++;
			if(coins.substr(p,3)=="HHH")
				HHH++;
		
		}
		cout<<i<<" "<<TTT<<" "<<TTH<<" "<<THT<<" "<<THH<<" "<<HTT<<" "<<HTH<<" "<<HHT<<" "<<HHH<<" "<<endl;
	}
	return 0;
}