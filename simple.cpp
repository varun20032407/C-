#include<iostream>
#include<math.h>
using namespace std;
float simple(){
	float si,r,p,n;
	string ch;
	cout<<"Enter the Principal amount:- ";
	cin>>p;
	cout<<"Enter the no.of years:- ";
	cin>>n;
	cout<<"Are you a senior citizen(y/n):- ";
	cin>>ch;
	if(ch=="y"||"Y"){
		r=0.1;
	}
	else if(ch=="n"||"N"){
		r=0.12;
	}
	else{
		cout<<"Invalid";
	}
	si=p*n*r;
	cout<<"SIMPLE INTEREST:- "<<si;
}
int main(){
	float si;
	simple();
}
	
