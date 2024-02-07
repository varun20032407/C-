 #include<iostream>
 using namespace std;
 void swap(int &a,int &b)
 {
 	int c;
 	c=a;
 	a=b;
 	b=c;
 }
 int main()
 {
 	int d,e;
 	cout<<"Enter the value of d and e:- ";
 	cin>>d>>e;
 	cout<<"\n BEFORE SWAPPING "<<"\n D= "<<d<<"\n E= "<<e<<endl;
 	swap(d,e);
 	cout<<"\n AFTER SWAPPING "<<"\n D= "<<d<<"\n E= "<<e<<endl;
 	return 0;
 }
