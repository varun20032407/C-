#include<iostream>
using namespace std;
int main(){
	float amt,yr,roi,si;
	string ch;
	cout<<"Enter the principal amount:- ";
	cin>>amt;
	cout<<"Enter the number of years:- ";
	cin>>yr;
	cout<<"Is customer senior citizen(y/n):- ";
	cin>>ch;
	if(amt>0&&yr>0){
			if(ch=="y"){
		si=amt*yr*12/100;
		cout<<"Interest:- "<<si;
	}
	else if(ch=="n"){
		si=amt*yr*10/100;
		cout<<"Interest:- "<<si;
	}
	else{
		cout<<"INVALID INPUT";
	}
	}
	else if(amt<=0&&yr<=0){
		cout<<"Invalid";
	}
	else{
		cout<<"invalid";
	}
	return 0;
}
