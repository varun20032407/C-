#include<iostream>
using namespace std;
int main(){
	int a,b,n,m,lcm,gcd;
	cout<<"\t\tENTER THE NUMBER 1---> ";
	if(!(cin>>m)){
		cout<<"INVALID!!";
		exit(0);
	}
	cout<<"\n\t\tENTER THE NUMBER 2---> ";
	if(!(cin>>n)){
		cout<<"INVALID!!";
		exit(0);
	}
	a=m;
	b=n;
	int temp;
	while(b!=0){
	temp=b;
	b=a%b;
	a=temp;
	}
	gcd=a;
	lcm=(m*n)/gcd;
	cout<<"\n\n\t\t\tLCM OF TWO NUMBERS---> "<<lcm;
	cout<<"\n\n\t\t\tGCD OF TWO NUMBERS---> "<<gcd;
	return 0;
}
