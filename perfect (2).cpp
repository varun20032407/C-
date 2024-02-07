#include<iostream>
using namespace std;
int main(){
	long long int n,t,flag,i,count=0;
	cout<<"ENTER THE VALUE OF N---> ";
	cin>>n;
	char c;
	cin.get(c);
	if(c=='.'){
		cout<<"INAVLID ";
		exit(0);
	}
	else if(!n){
		cout<<"INAVLID !";
		exit(0);
	}
	else if(n<=0){
		cout<<"INVALID@";
		exit(0);
	}
	t=2;
	while(1){
		flag=0;
		for(i=1;i<t;i++){
			if(t%i==0){
				flag=flag+i;
			}
		}
		if(t==flag){
			cout<<t<<" ARE THE PERFECT NUMBERS....\n";
		count++;
		if(n==count){
			exit(0);
			}
		}
		t++;
	}
}
