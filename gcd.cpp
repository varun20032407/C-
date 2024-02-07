#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	gcd(b,a%b);
}
int lcm(int arr[],int n){
	int ans=arr[0],gcd1=arr[0];
	for(int i=1;i<n;i++){
		ans=((arr[i]*ans)/gcd(arr[i],ans));
	}
	for(int j=1;j<n;j++){
		gcd1=gcd(arr[j],gcd1);
	}
	cout<<"\nGCD--> "<<gcd1;
	return ans;
}
int main(){
	int ar[100],n,lcm2;
	char c;
	cout<<"ENTER THE RANGE OF ELEMENTS---> ";
	cin>>n;
	cin.get(c);
	if(c=='.'){
		cout<<"\nINVALID1";
		exit(0);
	}
	if(n<=0){
		cout<<"\nINVALID2";
		exit(0);
	}
	if(n){
		for(int i=0;i<n;i++){
			cout<<"ENTER THE ELEMENT "<<i+1<<" ---> ";
			cin>>ar[i];
			cin.get(c);
			if(c=='.'){
				cout<<"\nINVALID3";
				exit(0);
			}
			if(!ar[i]){
				cout<<"\nINVALID4";
				exit(0) ;
			}
		}
		lcm2=lcm(ar,n);
		cout<<"\nLCM---> "<<lcm2;
	}
	else{
		cout<<"\nINVALID5";
		exit(0);
	}
}
