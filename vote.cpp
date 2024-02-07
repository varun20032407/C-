#include<iostream>
using namespace std;
int main(){
	int age,vote;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>0){
		if(age>=18){
		cout<<"You are elgible to vote";
	}
	else if(age<18){
		vote=18-age;
		cout<<"You are elgible to vote after " <<vote<< " years";
	}
}
	else if(age<0){
		cout<<"Age can't be invalid";
	}
	else{
		cout<<"Invalid";
	}
	return 0;
	}

