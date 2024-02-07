#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<"\tHII!!!\n";
	string ch;
	int a,b;
	int tb;
	int x,y,z,u;
	cout<<"\n\t\t\tDO YOU WANT TO DINE IN/TAKE AWAY(DINE IN-D/TAKE AWAY-T)--->";
	cin>>ch;
	if(ch=="D"||"d"){
		cout<<"\n\t\t\tPRESS 1 to open the menu----> ";
		cin>>a;
		if(a==1){
		cout<<"\n\t\tENTER THE MEAL CHOICE---> ";
		cout<<"\n\t\t1.BREAKFAST";
		cout<<"\n\t\t2.LUNCH";
		cout<<"\n\t\t3.DINNER\n\t\t\t\t";
		cin>>b;
		switch(b){
			case 1:{
				cout<<"\n\t\tITEMS \t\t\tPRICE";
				cout<<"\n\t\t1.IDILY \t\t40/-";
				cout<<"\n\t\t2.PONGAL \t\t50/-";
				cout<<"\n\t\t3.IDLIY/VADA(SAMBAR)\t70/-";
				int e;
				cout<<"\n\n\t\t\tEnter the items required----> ";
				cin>>e;
				if(e==1){
					u=40;
					cout<<"\n\t\tQUANTITY---> ";
					cin>>x;
					tb=x*u;
					cout<<"\n\t\t\tTOTAL BILL---> "<<tb;
				}
				else if(e==2){
					u=50;
					cout<<"\n\t\tQUANTITY---> ";
					cin>>y;
					tb=y*u;
					cout<<"\n\t\tTOTAL BILL---> "<<tb;
				}
				else if(e==3){
					u=70;
					cout<<"\n\t\tQUANTITY--->";
					cin>>z;
					tb=u*z;
					cout<<"\n\t\tTOTAL BILL---> "<<tb;
				}
				else if(e==12){
					u=90;
					int xy;
					cout<<"\n\t\tQUANTITY---> ";
					cin>>xy;
					tb=u*xy;
					cout<<"\n\t\tTOTAL BILL---> "<<tb;
				}
				else if(e=23){
					u=120;
					int yz;
					cout<<"\n\t\tQUANTITY---> ";
					cin>>yz;
					tb=u*yz;
					cout<<"\n\t\tTOTAL BILL--->"<<tb;
				}
				else if(e=31){
					u=110;
					int zx;
					cout<<"\n\t\tQUANTITY--->";
					cin>>zx;
					tb=u*zx;
					cout<<"\n\t\tTOTAL BILL---> "<<tb;
				}
				else{
					cout<<"\n\t\t---NO ORDER AVALIABLE---";
				}
				break;
			}
			
		}
		}
		
	}
}
