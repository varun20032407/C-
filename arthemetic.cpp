#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,add,sub,multi,div,mod;
	int ch;
	cout<<"Enter the choice:- \n";
	cout<<"\n1.ADD";
	cout<<"\n2.SUB";
	cout<<"\n3.MULTI";
	cout<<"\n4.DIV";
	cout<<"\n5.MOD";
	cin>>ch;
	cout<<"Enter the values of two numbers= ";
	cin>>a>>b;
	switch(ch){
		case 1:{
			add=a+b;
			cout<<"ADD= "<<add;
			break;
		}
		case 2:{
			sub=a-b;
			cout<<"SUB= "<<sub;
			break;
		}
		case 3:{
			multi=a*b;
			cout<<"MULTI= "<<multi;
			break;
		}
		case 4:{
			div=a/b;
			cout<<"DIV= "<<div;
			break;
		}
		case 5:{
			mod=a%b;
			cout<<"MOD= "<<mod;
			break;
		}
		default:
			cout<<"INVALID INPUT";
	}
	return 0;
}
