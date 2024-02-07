#include<iostream>
using namespace std;
class Emp{
	char empname[100];
	int empno;	
	public:
		void getemp(){
			cout<<"Enter the name of the employee:- ";
			cin>>empname;
			cout<<"Enter emp id:- ";
			cin>>empno;
		}
		void showemp(){
			cout<<"\nName of the employee:- \n"<<empname;
			cout<<"\nEmployee id:- \n"<<empno;
		}
}e;
class programmer:private Emp{
	int prgsal,prgda,prghra,prgpf,prgtax,prgnetsal;
	public:
		void getprg(){
			cout<<"Enter the programmer sal:- ";
			cin>>prgsal;
			cout<<"Enter the programmer da:- ";
			cin>>prgda;
			cout<<"Enter the programmer hra:- ";
			cin>>prghra;
			cout<<"Enter the programmer pf:- ";
			cin>>prgpf;
			cout<<"Ente the programmer tax:- ";
			cin>>prgtax;
		}
		void showprg(){
			cout<<"\nProgrammer Salary:- \n"<<prgsal;
			cout<<"\nProgrammer DA:- \n"<<prgda;
			cout<<"\nProgrammer HRA:- \n"<<prghra;
			cout<<"\nProgrammer PF:- \n"<<prgpf;
			cout<<"\nProgrammer TAX:- \n"<<prgtax;
			prgnetsal=prgsal+prgda*0.05+prghra*0.1-prgpf-prgtax*0.15;
			cout<<"\nProgrammer NETSALARY:- \n"<<prgnetsal;
		}
}p;
class assprof:private Emp{
		int asssal,assda,asshra,asspf,asstax,assnetsal;
	public:
		void getassp(){
			cout<<"Enter the ass.professor sal:- ";
			cin>>asssal;
			cout<<"Enter the ass.professor da:- ";
			cin>>assda;
			cout<<"Enter the ass.professor hra:- ";
			cin>>asshra;
			cout<<"Enter the ass.professor pf:- ";
			cin>>asspf;
			cout<<"Ente the ass.professor tax:- ";
			cin>>asstax;
		}
		void showassp(){
			cout<<"\nass.professor Salary:- \n"<<asssal;
			cout<<"\nass.professor DA:- \n"<<assda;
			cout<<"\nass.professor HRA:- \n"<<asshra;
			cout<<"\nass.professor PF:- \n"<<asspf;
			cout<<"\nass.professor TAX:- \n"<<asstax;
			assnetsal=asssal+assda*0.05+asshra*0.12-asspf-asstax*0.15;
			cout<<"\nass.professor NETSALARY:- \n"<<assnetsal;
		}
}ast;
class assoprof:private Emp{
		int assosal,assoda,assohra,assopf,assotax,assonetsal;
	public:
		void getassof(){
			cout<<"Enter the asso.professor sal:- ";
			cin>>assosal;
			cout<<"Enter the asso.professor da:- ";
			cin>>assoda;
			cout<<"Enter the asso.professor hra:- ";
			cin>>assohra;
			cout<<"Enter the asso.professor pf:- ";
			cin>>assopf;
			cout<<"Ente the asso.professor tax:- ";
			cin>>assotax;
		}
		void showassof(){
			cout<<"\nasso.professor Salary:- \n"<<assosal;
			cout<<"\nasso.professor DA:- \n"<<assoda;
			cout<<"\nasso.professor HRA:- \n"<<assohra;
			cout<<"\nasso.professor PF:- \n"<<assopf;
			cout<<"\nasso.professor TAX:- \n"<<assotax;
			assonetsal=assosal+assoda*0.05+assohra*0.08-assopf-assotax*0.15;
			cout<<"\nasso.professor NETSALARY:- \n"<<assonetsal;
		}
}as;
class prof:private Emp{
		int profsal,profda,profhra,profpf,proftax,profnetsal;
	public:
		void getprofe(){
			cout<<"Enter the professor sal:- ";
			cin>>profsal;
			cout<<"Enter the professor da:- ";
			cin>>profda;
			cout<<"Enter the professor hra:- ";
			cin>>profhra;
			cout<<"Enter the professor pf:- ";
			cin>>profpf;
			cout<<"Ente the professor tax:- ";
			cin>>proftax;
		}
		void showprofe(){
			cout<<"\nprofessor Salary:- \n"<<profsal;
			cout<<"\nprofessor DA:- \n"<<profda;
			cout<<"\nprofessor HRA:- \n"<<profhra;
			cout<<"\nprofessor PF:- \n"<<profpf;
			cout<<"\nprofessor TAX:- \n"<<proftax;
			profnetsal=profsal+profda*0.05+profhra*0.2-profpf-proftax*0.15;
			cout<<"professor NETSALARY:- \n"<<profnetsal;
		}
}pr;
int main(){
	int ch;
	e.getemp();
	e.showemp();
	cout<<"\n1.Programmer\n";
	cout<<"\n2.Assitant Profeesor\n";
	cout<<"\n3.Associate Professor\n";
	cout<<"\n4.Proffesor\n";
	cin>>ch;
	if(ch==1){
		p.getprg();
		p.showprg();
	}
	else if(ch==2){
		ast.getassp();
		ast.showassp();
	}
	else if(ch==3){
		as.getassof();
		as.showassof();
	}
	else if(ch==4){
		pr.getprofe();
		pr.showprofe();
	}
	else{
		cout<<"Invalid Input";
	}
	
}
