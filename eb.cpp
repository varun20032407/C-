#include<iostream>
#include<string.h>
using namespace std;
class EBbill{
	float pmr,cmr;
	int con;
	char e;
	public:
		void get(){
			cout<<"ENTER CONSUMER NUMBER---> ";
			if(!(cin>>con)){
				cout<<"INVALID!!";
				exit(0);
			}
			cin.get(e);
			if(e=='.'){
				cout<<"INVALID!!";
				exit(0);
			}
			
		}
		void show(){
			cout<<"\nCONSUMER NUMBER---> "<<con;
		}
}e;
class dc{
	float pmr,cmr,tuc,tb;
	string c;
	int ch;
	public:
		void gets(){	
			cout<<"ENTER LAST MONTH READING---> ";
			if(!(cin>>pmr)){
			cout<<"INVALID!!";
			exit(0);
			}
			cout<<"ENTER CURRENT MONTH READING---> ";
			if(!(cin>>cmr)){
			cout<<"INVALID";
			exit(0);
		}
			cout<<"CONNECTION TYPE(COMMERCIAL(2)/DOMESTIC(1))---> ";
			cin>>ch;
			}
		
		void shows(){
			if(ch==2){
				tuc=cmr-pmr;
				cout<<"\nTOTAL UNITS CONSUMED---> "<<tuc;
				if(tuc>=1&&tuc<=100){
					tb=tuc*6.75;
					cout<<"\nTOTAL BILL---> "<<tb;
				}
				else if(tuc>=101&&tuc<=500){
					tb=tuc*10.8;
					cout<<"\nTOTAL BILL---> "<<tb;
				}
				else{
					tb=tuc*16.2;
					cout<<"\nTOTAL BILL---> "<<tb;
				}
			}
			else if(ch==1){
				tuc=cmr-pmr;
				cout<<"\nTOTAL UNITS CONSUMED---> "<<tuc;
				if(tuc>=1&&tuc<=100){
					tb=tuc*5;
					cout<<"\nTOTAL BILL---> "<<tb;
				}
				else if(tuc>=101&&tuc<=500){
					tb=tuc*8;
					cout<<"\nTOTAL BILL---> "<<tb;
				}
				else{
					tb=tuc*12;
					cout<<"\nTOTAL BILL---> "<<tb;
				}
			}
			else{
				cout<<"\nINVALID";
			}
		}
}d;
int main(){
	e.get();
	d.gets();
	e.show();
	d.shows();
}
