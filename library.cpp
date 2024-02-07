#include<iostream>
using namespace std;
class library{
	char cusname[100];
	int cusno;
	public:
		 library(){
			cout<<"Enter the customer name:- ";
			cin>>cusname;
			cout<<"Enter the customer id:- ";
			cin>>cusno;
		}
		void showlib(){
			cout<<"\nCustomer name:- "<<cusname;
			cout<<"\nCustomer id:- "<<cusno;
		}
};
class issue:private library{
	int t=100,d,o,c,j,a;
	string bookname;
	public:
		void getis(){
			cout<<"\nEnter the book name(DS/OOPS/C/JAVA):- ";
			cin>>bookname;
		}
		void showis(){
			if(bookname=="DS"||"ds"){
				cout<<"\nBook name:- "<<bookname;
				d=t/4;
				cout<<"\nNo.of DS books= "<<d;
				a=d-1;
				cout<<"\nNo.of DS books left:- "<<a;
			}
			else if(bookname=="OOPS"||"oops"){
				cout<<"\nBook name:- "<<bookname;
				o=t/4;
				cout<<"\nNo.of DS books= "<<o;
				a=d-1;
				cout<<"\nNo.of DS books left:- "<<a;
			}
			else if(bookname=="C"||"c"){
				cout<<"\nBook name:- "<<bookname;
				c=t/4;	
				cout<<"\nNo.of DS books= "<<c;
				a=d-1;
				cout<<"\nNo.of DS books left:- "<<a;
			}
			else if(bookname=="JAVA"||"java"){
				cout<<"\nBook name:- "<<bookname;
				j=t/4;
				cout<<"\nNo.of DS books= "<<j;
				a=d-1;
				cout<<"\nNo.of DS books left:- "<<a;
			}
			else{
				cout<<"\nNO BOOK AVALIABLE";
			}
		}
}i;
class ret:private library{
	string bookname;
	int t,d,c,o,j;
	public:
		void getret(){
		cout<<"\nEnter bookname returned:- ";
		cin>>bookname;	
		}
		void showret(){
			if(bookname=="DS"||"ds"){
				d=d+1;
				cout<<"\nNo.of books returned= "<<d;
			}
			else if(bookname=="OOPS"||"oops"){
				o=o+1;
				cout<<"\nNo.of books returned= "<<o;
			}
			else if(bookname=="C"||"c"){
				c=c+1;
				cout<<"\nNo.of books returned= "<<c;
			}
			else if(bookname=="JAVA"||"java"){
				j=j+1;
				cout<<"\nNo.of books returned= "<<j;
			}
			else{
				cout<<"\nBOOKS CANT'T BE RETURNED";
			}
		}
}r;
int main(){
	library l;
	l.showlib();
	cout<<"Enter number of books:- ";
	cin>>n;
	for(i=)
	i.getis();
	i.showis();
	r.getret();
	r.showret();
}
