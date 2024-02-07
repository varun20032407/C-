#include<iostream>
using namespace std;
	inline void Sum(int p,int q){
		int sum=p+q;
		cout<<"ADD= "<<p<<"+"<<q<<"="<<sum<<"\n";
	}
	inline void Sub(int p,int q){
		int sub=p-q;
		cout<<"SUB= "<<p<<"-"<<q<<"="<<sub<<"\n";
	}
	inline void Multiplication(int p,int q){
		int multi=p*q;
		cout<<"MULTI= "<<p<<"*"<<q<<"="<<multi<<"\n";
	}
	inline void Div(int p,int q){
		int div=p/q;
		cout<<"DIVISION= "<<p<<"/"<<q<<"="<<div<<"\n";
	}
	inline void Mod(int p,int q){
		int mod=p%q;
		cout<<"MOD= "<<p<<"%"<<q<<"="<<mod<<"\n";
	}
	int main(){
		int p,q;
		cout<<"Enter the two numbers= ";
		cin>>p>>q;
		cout<<endl;
		Sum(p,q);
		Sub(p,q);
		Multiplication(p,q);
		Div(p,q);
		Mod(p,q);
		return 0;
	}
