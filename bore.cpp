#include<iostream>
using namespace std;
	void swap(int a,int b,int c){
	int d;
	d=b;
	b=a;
	a=c;
	c=d;
}
int main(){
	cout<<"\t---SWAP OF THREE NUMBERS---\n";
	int a,b,c,d;
	cout<<"\n\t\t\tENTER THE VALUE OF FIRST NUMBER---> ";
	cin>>a;
	cout<<"\n\t\t\tENTER THE VALUE OF SECOND NUMBER---> ";
	cin>>b;
	cout<<"\n\t\t\tENTER THE VALUE OF THIRD NUMBER--->";
	cin>>c;
	swap(a,b,c);
	//------------------------------------------------------------------//
	cout<<"\n\t\t\t\tTHE VALUE OF A---> "<<a;
	cout<<"\n\t\t\t\tTHE VALUE OF B---> "<<b;
	cout<<"\n\t\t\t\tTHE VALUE OF C---> "<<c;
}
