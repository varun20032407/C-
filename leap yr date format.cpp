#include<iostream>
using namespace std;
int main(){
	int day,date,month,year,pre;
	cout<<"Enter day:- ";
	cin>>day;
	cout<<"Enter month:- ";
	cin>>month;
	cout<<"Enter year:- ";
	cin>>year;
	cout<<"DATE: "<<day<<"/"<<month<<"/"<<year;
	if(year>0&&month<=12&&day<=31){
		if(year%400==0){
		cout<<"\nLeap year "<<year;
		pre=year+4;
		cout<<"\nNext year---> "<<pre;
	}
	else if(year%100==0){
		cout<<"\nNot a leap year "<<year;
		if(year%2==0){
			pre=year-4;
			cout<<"\nPrevious year---> "<<pre;
		}
		else{
			pre=year-3;
			cout<<"\nPrevious year---> "<<pre;
		}
	}
	else if(year%4==0){
		cout<<"\nLeap year "<<year;
		pre=year+4;
		cout<<"\nNext year---> "<<pre;
	}
	else{
		cout<<"\nNot a leap year "<<year;
		if(year%2==0){
			pre=year-4;
			cout<<"\nPrevious year---> "<<pre;
		}
		else{
			pre=year-1;
			cout<<"\nPrevious year---> "<<pre;
		}
	}
	}
	else if(year<=0){
		cout<<"\nInvalid";
	}
	else{
		cout<<"\ninvalid";
	}	
	return 0;
}

