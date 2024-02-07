#include<iostream>
using namespace std;
int main(){
	int inc,tax;
	cout<<"Enter the income:- ";
	cin>>inc;
	if(inc>0){
		if(inc<=60000){
		tax=0;
		tax=inc-tax;
		cout<<"Income Tax= "<<tax;
	}
	else if(inc>60000<=150000){
		tax=inc*0.05;
		cout<<"Income Tax= "<<tax;
	}
	else if(inc>150000<=500000){
		tax=inc*0.1;
		cout<<"Income Tax= "<<tax;
	}
	else{
		tax=inc*0.15;
		cout<<"Income Tax= "<<tax;
	}
	}
	else if(inc<0){
		cout<<"INCOME CAN'T BE IN NEGATIVE";
	}
	else{
		cout<<"INVALID";
	}
	return 0;
}
