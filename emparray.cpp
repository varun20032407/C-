#include<iostream>
using namespace std;
class Employee
{
	int id;
	char name[25];
	char date[100];
	int sal;
	public:
		void getdata();
		void putdata();
};
void Employee::getdata()
{
	cout<<"ENTER EMPID:- ";
	cin>>id;
	cout<<"ENTER EMPNAME:- ";
	cin>>name;
	cout<<"ENTER EMPDATE OF JOINING:- ";
	cin>>date;
	cout<<"ENTER EMPSAL:- ";
	cin>>sal;
}
void Employee::putdata()
{
	cout<<id<<" ";
	cout<<name<<" ";
	cout<<date<<" ";
	cout<<sal<<" ";
	cout<<endl;
}
int main()
{
	Employee emp[20];
	int a,b;
	cout<<"ENTER TOTAL NUMBER OF EMPLOYEE:- ";
	cin>>a;
	for(b=0;b<a;b++)
	emp[b].getdata();
	cout<<"THE DATA OF THE EMPLOYEE:- "<<endl;
	for(b=0;b<a;b++)
	emp[b].putdata();
}
