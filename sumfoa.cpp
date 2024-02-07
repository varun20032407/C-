#include<iostream>
using namespace std;
void sum(int a,int b);
void sum (int a,int b,int c);
void sum(int a,int b,int c,int d);
int main()
{
	sum(1,2);
	sum(1,2,3);
	sum(1,2,3,4);
	return 0;
}
void sum(int a,int b)
{
	cout<<endl<<"SUM OF a+b= "<<a+b;
}
void sum(int a,int b,int c)
{
	cout<<endl<<"SUM OF a+b+c= "<<a+b+c;
}
void sum(int a,int b,int c,int d)
{
	cout<<endl<<"SUM OF a+b+c+d= "<<a+b+c+d;
}
