#include<iostream>
using namespace std;
class student{
	protected:
		int rno;
		public:
			void getdetails(int a){
				rno=a;
			}
			void putdetails(){
				cout<<"ROLL NUMBER OF STUDENT:- "<<rno<<"\n";
			}
			
};
class subject:virtual public student{
	protected:
		int submark;
		public:
			void getdetails1(int b){
				submark=b;
			}
			void putdetails1(){
				cout<<"\n SUBJECT MARKS:- "<<submark<<"\n";
			}
};
class sports:virtual public student{
	protected:
		int spmark;
		public:
			void getdetails2(int c){
				spmark=c;
			}
			void putdetails2(){
				cout<<"\n RESULT IN SPORTS:- "<<spmark<<"\n";
			}
};
class report:public subject,public sports{
	int total;
	public:
	void putdetails3(){
		total=submark+spmark;
		putdetails();
		putdetails1();
		putdetails2();
		cout<<"\n TOTAL REPORT OF THE STUDENT:- "<<total<<"\n";
	}
};
int main(){
	report rep;
	rep.getdetails(12);
	rep.getdetails1(75);
	rep.getdetails2(95);
	rep.putdetails3();
	return 0;
}
