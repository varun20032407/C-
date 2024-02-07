#include<iostream>
using namespace std;
class student{
	int stdno;
	char name[100];
	public:
		void getstd(){
			cout<<"Enter student number:- ";
			cin>>stdno;
			cout<<"Enter student name:- ";
			cin>>name;
		}
		void showstd(){
			cout<<"\nStudent Roll no:- \n"<<stdno;
			cout<<"\nName of student:- \n"<<name;
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
	cout<<"\nMark can't be negative\n";
	}
	else if(m1==0||m2==0||m3==0){
		cout<<"\nEXIT\n";
	}
	else if(m1==m2&&m2==m3&&m3==1){
		cout<<"\nNone of the marks are max and min\n";
	}
	else if(m1==m2&&m1>m3){
		cout<<"\nMaximum "<<m1<<" and "<<m2<<" marks";
		cout<<"\nMinimum "<<m3<<" mark";
	}
	else if(m2==m3&&m2>m1){
		cout<<"\nMaximum "<<m2<<" and "<<m3<<" marks";
		cout<<"\nMinimum "<<m1<<" mark";
	}
	else if(m3==m1&&m3>m2){
		cout<<"\nMaximum "<<m3<<" and "<<m1<<" marks";
		cout<<"\nMinimum "<<m2<<" mark";
	}
	else if(m1>m2&&m1>m3){
		cout<<"\nMaximum "<<m1<<" mark";
		cout<<"\nMinimum "<<m2<<" and "<<m3<<" mark";
	}
	else if(m2>m1&&m2>m3){
		cout<<"\nMaximum "<<m2<<" mark";
		cout<<"\nMinimum "<<m1<<" and "<<m3<<" mark";
	}
	else{
		cout<<"\nMaximum "<<m3<<" mark";
		cout<<"\nMinimum "<<m1<<" and "<<m2<<" mark";
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
