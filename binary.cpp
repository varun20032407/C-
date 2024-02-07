#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int bn,rem,dn=0,i=1;
	cout<<"Enter binary num:- ";
	cin>>bn;
	int temp=bn;
	while(bn>0){
		rem=temp%10;
		dn=dn+rem*i;
		i*=2;
		temp/=10;
	}
	cout<<"dn---> "<<dn;
	return 0;
}
