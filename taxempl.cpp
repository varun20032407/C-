#include<iostream>
using namespace std;
	class salary{
		public:
		int da;
		int hra;
		int bon;
		int gross;
		int ded,netsal;
		int tax;
			void getsal(){
				cout<<"Enter the da:- ";
				cin>>da;
				cout<<"Enter the hra:- ";
				cin>>hra;
				cout<<"Enter the bonus:- ";
				cin>>bon;
			}
			void showsal(){
				cout<<"\nDA:- \n"<<da;
				cout<<"\nHRA:- \n"<<hra;
				cout<<"\nBONUS:- \n"<<bon;
				gross=da+hra+bon;
				cout<<"\nGross:- \n"<<gross<<endl;
			}
	}s;
	class it:public salary{
		public:
		void showiit(){
			if(gross<20000){
			tax=gross*0.05;
			cout<<"\nIncome tax:- \n"<<tax;
		}
		else if(gross>20000<=50000){
			tax=gross*0.1;
			cout<<"\nIncome tax:- \n"<<tax;
		}
		else{
			tax=gross*0.3;
			cout<<"\nIncome tax:- \n"<<tax;
		}
		}
	}i;
	class dedu:public salary{
		public:
		void showdet(){
		ded=gross-tax;
		cout<<"\nDeduction:- \n"<<ded;
		netsal=gross-tax;
		cout<<"\nNetsal:- \n"<<netsal;
		}
	}d;
	int main(){
	s.getsal();
	s.showsal();
	i.showiit();
	d.showdet();
	}
