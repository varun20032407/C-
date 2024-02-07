#include<iostream>
using namespace std;
class emp{
	int id;
	char name[100];
	public:
		void getem(){
			cout<<"Enter employee id:- ";
			cin>>id;
			cout<<"Enter employee name:- ";
			cin>>name;
		}
		void showem(){
			cout<<"EMPLOYEE ID:- "<<id;
			cout<<"\nEMPLOYEE NAME:- "<<name;
		}
}e;
int main(){
	cout<<"-----------------ENTER EMPLOYEE DETAILS--------------\n";
	e.getem();
	cout<<"\n====================EMPLOYEE DETAILS==================\n";
	e.showem();
	return 0;
}
