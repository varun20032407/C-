#include<iostream>
using namespace std;
	inline void circle(float r){
		float areac=3.14*r*r;
		cout<<"AREA OF CIRCLE= "<<areac<<"\n";
	}
	inline void rectangle(float l,float b){
		float arear=l*b;
		cout<<"AREA OF RECTANGLE= "<<arear<<"\n";
	}
	inline void sqaure(float a){
		float areas=a*a;
		cout<<"AREA OF SQUARE= "<<areas<<"\n";
	}
	inline void triangle(float bs,float ht){
		float areat=bs*ht*0.5;
		cout<<"AREA OF TRIANGLE= "<<areat<<"\n";
	}
	int main(){
		int r,l,b,a,bs,ht;
		cout<<"Enter the radius of circle:- ";
		cin>>r;
		cout<<"Enter length and breadth of rectangle:- ";
		cin>>l>>b;
		cout<<"Enter the side of square:- ";
		cin>>a;
		cout<<"Enter the base and height of triangle:- ";
		cin>>bs>>ht;
		cout<<endl;
		circle(r);
		rectangle(l,b);
		sqaure(a);
		triangle(bs,ht);
	}
