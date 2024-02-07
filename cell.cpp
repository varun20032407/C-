#include<iostream>
using namespace std;
class student{
	int stdno;
	char name[100];
	public:
		void getstd(){
			cout<"Enter student number:- ";
			cin>>stdno;
			cout<<"Enter student name:- ";
			cin>>name;
		}
		void showstd(){
			cout<<"Student Roll no:- "<<stdno;
			cout<<"Name of student:- "<<name;
		}
}s;
class exam{
	int m1,m2,m3,max,min;
	public:
		void getex(){
	cout<<"Enter mark of subject1:- ";
	cin>>m1;
	cout<<"Enter mark of subject2:- ";
	cin>>m2;
	cout<<"Enter mark of subject3:- ";
	cin>>m3;	
		}
		void showex(){
	if(m1<0||m2<0||m3<0){
	cout<<"Mark can't be negative";
	}
	else if(m1==0||m2==0||m3==0){
		cout<<"EXIT";
	}
	else if(m1==m2&&m2==m3&&m3==1){
		cout<<"None of the marks are max and min";
	}
	else if(m1==m2&&m1>m3){
		cout<<"Maximum "<<m1<<" and"<<m2<<" marks";
		cout<<"Minimum "<<m3<<" mark";
	}
	else if(m2==m3&&m2>m1){
		cout<<"Maximum "<<m2<<" and"<<m3<<" marks";
		cout<<"Minimum "<<m1<<" mark";
	}
	else if(m3==m1&&m3>m2){
		cout<<"Maximum "<<m3<<" and"<<m1<<" marks";
		cout<<"Minimum "<<m2<<" mark";
	}
	else if(m1>m2&&m1>m3){
		cout<<"Maximum "<<m1<<" mark";
		cout<<"Minimum mark "<<m2<<" and"<<m3;
	}
	else if(m2>m1&&m2>m3){
		cout<<"Maximum "<<m2<<" mark";
		cout<<"Minimum mark "<<m1<<" and"<<m3;
	}
	else{
		cout<<"Maximum "<<m3<<" mark";
		cout<<"Minimum mark "<<m1<<" and"<<m2;
	}	
		}
}e;
class result:public student,public exam{
}r;
int main(){
	r.getstd();
	r.getex();
	r.showstd();
	r.showex();
	return 0;
}
