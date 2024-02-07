#include<iostream>
using namespace std;
int main(){
	int i,year,pre;
	cout<<"Enter year---> ";
	cin>>year;
		if(year%400==0){
		cout<<"\nLeap year "<<year;
		for(i=1;i<year;i++){
			if((year-i)%4==0){
				cout<<"pre yr---> "<<i;
			}
		}
	}
	else if(year%100==0){
		cout<<"\nNot a leap year "<<year;
	}
	else if(year%4==0){
		cout<<"\nLeap year "<<year;
		pre=year-4;
		cout<<"\nPrevious year---> "<<pre;
	}
	else{
		cout<<"\nNot a leap year "<<year;
	}
}
