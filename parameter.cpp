#include<iostream>
using namespace std;
class emp{
public:
	string name;
	int id;
	int sal;
	int tax;
	int netsal;
	int da;
	int g;
	public:
		void compute(){
	
			da=0.5*sal;
			g=sal+da;
			tax=g*0.2;
			netsal=(sal+da)-tax;
		}
		emp(string ename,int eid, int salary)
		{
	/*		cout<<"Enter the name of employee:- ";
	cin>>name;
	cout<<"Enter employee id:- ";
	cin>>id;
	cout<<"Enter basic salary:- ";
	cin>>sal;
	cout<<"salary = " <<sal;*/
	
		name=ename;
		id=eid;
		sal=salary;
	
		}
		void print(){
			cout<<"\nEmployee name:- "<<name;
			cout<<"\nEmployee id:- "<<id;
			cout<<"\nEmployee da:- "<<da;
			cout<<"\nEmployee tax:- "<<tax;
			cout<<"\nEmployee salary:- "<<sal;
			cout<<"\nEmployee gross:- "<<g;
			cout<<"\nEmployee net salary:- "<<netsal;
		}
};
int main(){
//	int id,sal,da,tax,netsal,g;
//	char name[100];
	emp e("rose",123,1000);
//	e.input();
	e.compute();
	e.print();
}
