#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"ENTER FIRST NUMBER: ";
	cin>>num1;
	cout<<"ENTER SECOND NUMBER: ";
	cin>>num2;
	cout<<"Before Swapping: First Number: " <<num1<< "Second Number: " <<num2;
	num3=num1;
	num1=num2;
	num2=num3;
	cout<<"After Swapping: First Number: " <<num1<< "Second Number: " <<num2;
	
	
}
