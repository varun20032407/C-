#include<iostream>
using namespace std;
int main(){
	char name[100];
	int ch;
	cout<<"Enter the name:- ";
	cin>>name;
	cout<<"1.KRISHIKKA";
	cout<<"\n2.BHANU";
	cout<<"\n3.RHEA\n";
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<" \n"<<name;
			cout<<"\nB'DAY 29/08/2004";
			cout<<"\nADVANCE HAPPY BIRTHDAY LITTLE GIRL";
			break;
		}
		case 2:{
			cout<<" \n"<<name;
			cout<<"\nB'DAY 27/10/2003";
			cout<<"\nADVANCE HAPPY BIRTHDAY BEAUTIFUL";
			break;
		}
		case 3:{
			cout<<" \n"<<name;
			cout<<"\nB'DAY 15/08/2003";
			cout<<"\nADVANCE HAPPY BIRTHDAY GORGEOUS";
			break;
		}
	}
}
