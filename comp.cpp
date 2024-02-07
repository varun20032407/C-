#include<iostream>
#include<math.h>
using namespace std;
float si(int p,int n,int r){
	return(p*n*r)/100;
}
float ci(int p,int n,int r,int t){
		return(p*pow((1+r/100),t));
	}
int main(){
	int p,n,r,t;
	cout<<"Enter the principal amount:- ";
	cin>>p;
	cout<<"Enter the duration:- ";
	cin>>n;
	cout<<"Ente the compound interest time:- ";
	cin>>t;
	cout<<"Enter the rate of interest:- ";
	cin>>r;
	cout<<"\nSIMPLE INTEREST:- "<<si(p,n,r);
	cout<<"\nCOMPOUND INTEREST:- "<<ci(p,n,r,t);
	return 0;
}

