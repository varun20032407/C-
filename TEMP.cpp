#include <iostream>
#include <math.h>
using namespace std;		
int main()
{
	float C,F,celsius,fahrenheit;
	int ch;
	cout<<"                  --------- TEMPERATURE CALCULATION ---------";
	cout<<"\n1.CONVERT CELSIUS TO FAHRENHEIT";
	cout<<"\n2.CONVERT FAHRENHEIT TO CELSIUS";
	cin>>ch;
	switch (ch)
	{
		case 1:
			{
				cout<<"ENTER THE TEMPERATURE IN CELSIUS = ";
				cin>>C;
				F=9/5*C+32;
				cout<<"TEMPERATUR IN FAHRENHEIT = "<<F<<endl;
				char c;
				cout<<"\n DO YOU WANT TO CONTINUE(Y/N)";
				cin>>c;
				if(c=='Y')
				{
					main();
				}
				else if(c=='N')
				{
					break;
				}
				else{
					cout<<"INVALID ENTRY";
				}
				break;
			}
			case 2:
				{
					cout<<"ENTER THE TEMPERATURE IN FAHRENHEIT = ";
					cin>>C;
					C=5/9*F+32;
					cout<<"TEMPERATURE IN CELSIUS = "<<C<<endl;
						char cc;
				cout<<"\n DO YOU WANT TO CONTINUE(Y/N)";
				cin>>cc;
				if(cc=='Y')
				{
					main();
				}
				else if(cc=='N')
				{
					break;
				}
				else{
					cout<<"INVALID ENTRY";
					break;
				}
				default: cout<<"\n INVALID CHOICE TRY AGAIN!!";
				break;
	}
	return 0;
}
}
