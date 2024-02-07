#include <iostream>
#include <math.h>
using namespace std;		
int main()
{
	float l,b,a,area,s;
	int ch;
	cout<<"1.Area of Rectangle";
	cout<<"\n2.Area of Triangle";
	cin>>ch;
	switch (ch)
	{
		case 1:
			{
				cout<<"Enter Length and Breadth of Rectangle= ";
				cin>>l>>b;
				area=l*b;
				cout<<"AREA OF RECTANGLE= "<<area<<endl;
				break;
			}
			case 2:
				{
					cout<<"Enter the sides of Triangle = ";
					cin>>l>>b>>a;
					s=l+b+a/2;
					area=sqrt(s*(s-l)*(s-b)*(s-a));
					cout<<"AREA OF TRIANGLE= "<<area<<endl;
					break;
				}
				default: cout<<"\n INVALID CHOICE TRY AGAIN!!";
				break;
	}
	return 0;
}
