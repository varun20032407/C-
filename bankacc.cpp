#include<iostream>
using namespace std;
class account{
	int bal,wd,de;
	public:
	void getacc(){
		cout<<"Enter amount to withdraw:- ";
		cin>>wd;
		cout<<"Enter amount to deposit:- ";
		cin>>de;
	}
	void showacc(){
		cout<<"\nAMOUNT WITHDRAWED:- \n"<<wd;
		cout<<"\nAMOUNT DEPOSITED:- \n"<<de;
		if(de>wd){
			bal=de-wd;
		cout<<"\nBalance:- \n"<<bal;
		}
		else{
			cout<<"\nLow deposit\n";
		}
	}
}a;
class user{
	char name[100];
	int accno;
	public:
	void getuse(){
		cout<<"Enter the name:- ";
		cin>>name;
		cout<<"Enter the account number:- ";
		cin>>accno;
	}
	void showuse(){
		cout<<"\nName of banker:- \n"<<name;
		cout<<"\nAccount number:- \n"<<accno;
	}
}u;
class savings:public account,public user{
}s;
int main(){
	cout<<"\n ---------------------BANKING ACCOUNT INFORMATION-------------------\n";
	s.getuse();
	s.getacc();
	s.showuse();
	s.showacc();
	return 0;
}
