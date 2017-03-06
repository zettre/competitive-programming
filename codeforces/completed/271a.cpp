#include <iostream>
using namespace std;
int main()
{
	int year,y;
	cin>>year;
	while(1)
	{
		year++;
		y=year;
		int y1,y2,y3,y4;
		y4=y%10;
		y=y/10;
		y3=y%10;
		y=y/10;
		y2=y%10;
		y=y/10;
		y1=y%10;
		if(y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4)
		{
			break;
		}
	}
	cout<<year<<endl;
	return 0;
}