#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float area,r,pi=3.14,circumference;
	int ch;
	cout<<"1.Area of Circle";
	cout<<"\n.2 Perimeter of Circle";
	cin>>ch;
	switch (ch)
	{
		case 1:
			{
				cout<<"Enter the raidus of circle= ";
				cin>>r>>pi;
				area=pi*r*r;
				cout<<"AREA OF CIRCLE= "<<area<<endl;
				break;
			}
			case 2:
				{
					cout<<"Enter the radius of circle= ";
					cin>>r>>pi;
					circumference=2*pi*r;
					cout<<"CIRCUMFERENCE OF CIRCLE= "<<circumference<<endl;
					break;
				}
				default: cout<<"\n INVALID CHOICE TRY AGAIN";
				break;
	}
}
