#include<iostream>
using namespace std;
int main(){
	int n,rev=0,rem;
	cout<<"Enter the number= ";
	cin>>n;
	if(n>0){
		while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	cout<<"The reversed number= "<<rev<<endl;
	}
	else if(n<0){
		cout<<"Negative cant be reversed";
	}
	else{
		cout<<"Invalid";
	}
}
