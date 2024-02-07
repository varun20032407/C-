#include<iostream>
using namespace std;
class EB{
	char cusname[100];
	int cusno;
	float pmr,cmr,eb;
	string ch;
	public:
		void getdetails();
		void showdetails();
};
void EB::getdetails(){
cout<<"Enter customer name:- ";
cin>>cusname;
cout<<"Enter customer number:- ";
cin>>cusno;
cout<<"Previous month reading:- ";
cin>>pmr;
cout<<"Enter current month reading:- ";
cin>>cmr;
cout<<"Is the EB connection domestic or commercial(d/c):- ";
cin>>ch;
}
void EB::showdetails(){
	cout<<"\nCustomer name:- \n"<<cusname;
	cout<<"\nCustomer number:- \n"<<cusno;
	cout<<"\nPrevious motnth reading:- \n"<<pmr;
	if(ch=="d"){
		if(cmr<=100){
			eb=(pmr-cmr)*1;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
		else if(cmr>100<=200){
			eb=(pmr-cmr)*2.5;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
		else if(cmr>200<=500){
			eb=(pmr-cmr)*4;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
		else{
			eb=(pmr-cmr)*6;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
	}
	else if(ch=="c"){
		if(cmr<=100){
			eb=(pmr-cmr)*2;
			cout<<"Electricity Bill:- \n"<<eb;
		}
		else if(cmr>100<=200){
			eb=(pmr-cmr)*4.5;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
		else if(cmr>200<=500){
			eb=(pmr-cmr)*6;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
		else{
			eb=(pmr-cmr)*7;
			cout<<"\nElectricity Bill:- \n"<<eb;
		}
	}
}
int main(){
	EB e;
	e.getdetails();
	e.showdetails();
	return 0;
}
