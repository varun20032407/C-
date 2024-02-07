#include <iostream>
#include <math.h>
using namespace std;		
int main()
{
	float a,b,add,sub,multi,div;
	int ch;
	cout<<"                                       --------------ARITHMETIC OPERATORS-------------- ";
	cout<<"\n1.Add";
	cout<<"\n2.Sub";
	cout<<"\n3.Multi";
	cout<<"\n4.Div";
	cin>>ch;
	switch (ch)
	{
		case 1:
			{
				cout<<"Enter values of a and b = ";
				cin>>a>>b;
				add=a+b;
				cout<<"SUM OF TWO NUMBERS = "<<add<<endl;
				break;
			}
			case 2:
				{
					cout<<"Enter the values of a and b = ";
					cin>>a>>b;
					sub=a-b;
					cout<<"SUB OF TWO NUMBERS = "<<sub<<endl;
					break;
				}
				case 3:
					{
						cout<<"Enter the values of a and b = ";
						cin>>a>>b;
						multi=a*b;
						cout<<"MULTI OF TWO NUMBERS = "<<multi<<endl;
						break;
					}
					case 4:
						{
							cout<<"Enter the values of a and b = ";
							cin>>a>>b;
							div=a/b;
							cout<<"DIV OF TWO NUMBERS = "<<div<<endl;
							break;
						}
				default: cout<<"\n INVALID CHOICE TRY AGAIN!!";
				break;
	}
	return 0;
}
