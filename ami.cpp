#include<iostream>
using namespace std;
class rectangle{
	float l,b,area;
	public:
		void getrec(){
			cout<<"Enter the length and breadth of rectangle:- ";
			cin>>l>>b;
		}
		void showrec(){
			area=l*b;
			cout<<"\nArea of rectangle= "<<area<<" sq.units";
		}
}r;
class shape{
	char sh[100];
	public:
		void gets(){
			cout<<"Enter the shape:- ";
			cin>>sh;
		}
		void shows(){
			cout<<"Shape:- "<<sh;
		}
}s;
class cuboid:public rectangle,public shape{
}c;
int main(){
	c.gets();
	c.getrec();
	c.shows();
	c.showrec();
	return 0;
}
