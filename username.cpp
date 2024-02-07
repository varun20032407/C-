#include<iostream>
using namespace std;
int main(){
	string a,b;
	cout<<"Enter the username:- ";
	cin>>a;
	cout<<"Re-Enter the username:- ";
	cin>>b;
	if(a==b){
		cout<<"Username is valid";
	}
	else{
		cout<<"Username is invalid";
	}
}
