#include<iostream>
using namespace std;
int main(){
	int i,j,m,n,count=0,a[100],b[100];
	int p=0,co=0;
	cout<<"ENTER THE STARTING RANGE---> ";
	cin>>m;
	char c;
	cin.get(c);
	if(c=='.'){
		cout<<"INVALID @";
		exit(0);
	}
	else if(!m){
		cout<<"INVALID!!" ;
		exit(0);		
	}
	else if(m<0){
		cout<<"INVALID#$";
		exit(0);
	}
	cout<<"ENTER THE ENDING RANGE----> ";
	cin>>n;
	cin.get(c);
	if(c=='.'){
		cout<<"INVALID";
		exit(0);
	}
	else if(!n){
		cout<<"INVALID(";
		exit(0);
	}
	else if(n<=0){
		cout<<"INVALID $%";
	}
	else if(m>n){
		cout<<"INVALID";
		exit(0);
	}
	else if(m==n){
		cout<<"IN";
		exit(0);
	}
	
	for(i=m;i<n;i++){
		count=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==0){
			a[p]=i;
			p++;
		}
		else{
			b[co]=i;
			co++;
		}
	}
	cout<<"\nTHE PRIME NUMBERS ARE--->\n";
	for(i=0;i<p;i++){
		cout<<" "<<a[i];
	}
	cout<<"\nTHE COMPOSITE NUMBERS---->\n";
	for(i=0;i<co;i++){
		cout<<" "<<b[i];
	}
}
