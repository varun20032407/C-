#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout<<"  <---------ELECTRICITY BILL--------->  ";
char name[100];
float unit;
cout<<"\n ENTER THE NAME OF THE USER---> ";
cin>>name;
cout<<"\n ENTER UNITS---> ";
cin>>unit;
float amt;
if(unit>=100&&unit<200)
{
	amt=50.0+(0.60*100);
}
else if(unit>=200&&unit<300)
{
	amt=50.0+(0.80*200);
}
else if(unit>=300)
{
	amt=50+(0.90*300);
}
else
{
	cout<<"INVALID ENTRY!!";
	exit(0);
}
if(amt>300)
{
	cout<<"\nEXTRA CHARGE\n";
	amt=amt+(15.0/100.0);
}
cout<<"TOTAL BILL = "<<amt;
return 0;
}

