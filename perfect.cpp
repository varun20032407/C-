#include<iostream>
using namespace std;
int main(){
	int sv,ev,n,sum,c=0;
	cout<<"Enter the starting value:- ";
	cin>>sv;
	cout<<"Enter the ending value:- ";
	cin>>ev;
	cout<<"Enter the nth value:- ";
	cin>>n;
	if(n<=0){
		cout<<"Invalid";
	}
	else{
		for(int i=sv;i<=ev;i++){
			sum=0;
			for(int j=1;j<1;j++){
				if(i%j==0){
					sum+=j;
				}
			}
			if(sum==i){
				cout<<(i);
			}
		}
		
	}
	return 0;
	
}
