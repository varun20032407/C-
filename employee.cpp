#include <iostream>
using namespace std;
int main()
{
	cout<<"\n--------> INCREMENTED SALARY <----------\n";
	float salary,bonus;
	char grade;
	cout<<"ENTER THE SALARY:- ";
	cin>>salary;
	cout<<"ENTER THE GRADE:- ";
	cin>>grade;
	if(grade=='A')
	{
		bonus=salary*0.05;
	salary=salary+bonus;
	}
	else if(grade=='B')
	{
		bonus=salary*0.1;
	salary=salary+bonus;
	}
	else
	{
		cout<<"INVALID INPUT";
		exit (0);
	}
	if(salary<10000)
	{
		cout<<"\n SALARY CASE BELOW 10000 \n";
			bonus=salary*0.02;
	salary=salary+bonus;
	}
	cout<<"TOTAL SALARY OF THE EMPLOYEE:- "<<salary;
	
	return 0;
	
}

