#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float ag,m1,m2,m3,m4,tot;
	cout<<"Enter mark of subject 1:- ";
	cin>>m1;
	cout<<"Enter mark of subject 2:- ";
	cin>>m2;
	cout<<"Enter mark of subject 3:- ";
	cin>>m3;
	cout<<"Enter mark of subject 4:- ";
	cin>>m4;
	tot=m1+m2+m3+m4;
	ag=tot/4;
	cout<<"\nTotal= \n"<<tot;
	cout<<"\nAggregate= \n"<<ag;
	if(ag>75){
		cout<<"\nDistinction\n";
	}
	else if(ag>60<=75){  
		cout<<"\nFirst Division\n";
	}
	else if(ag>50<=60){
		cout<<"\nSecond Division\n";
	}
	else if(ag>40<=50){
		cout<<"\nThird Divison\n";
	}
	else{
		cout<<"\nFail\n";
	}
}
