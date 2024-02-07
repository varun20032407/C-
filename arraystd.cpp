#include<iostream>
using namespace std;
	class stud{
		int stdid;
		char name[100];
		int grade;
		public:
			void getstd(){
				cout<<"ENTER STUDENT NAME:- ";
				cin>>name;
				cout<<"ENTER STUDENT ROLL NO.:- ";
				cin>>stdid;
				cout<<"ENTER STUDENT GRADE:- ";
				cin>>grade;
			}
			void showstd(){
				cout<<"\nSTUDENT NAME:- "<<name;
				cout<<"\nSTUDENT ROLL NO:- "<<stdid;
				if(grade>=80){
					cout<<"\nGRADE:- "<<grade;
					cout<<"\nOUTSTANDING";
				}
				else if(grade<=75){
					cout<<"\nGRADE:- "<<grade;
					cout<<"\nAVERAGE";
				}
				else {
					cout<<"\nGRADE:- "<<grade;
					cout<<"\nFAIL";
				}
			}
	}s[40];
	int main(){
		int n,i;
		cout<<"ENTER NUMBER OF STUDENTS:- ";
		cin>>n;
		for(i=0;i<n;i++)
		s[i].getstd();
		cout<<"EMPLOYEE DATA\n";
		for(i=0;i<n;i++)
		s[i].showstd();
	}
