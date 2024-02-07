#include<iostream>
using namespace std;
int main(){
	int n,f[100],j,i;
	long long int fact=1;
	cout<<"ENTER THE NUMBER---> ";
	cin>>n;
	j=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			f[j]=i;
			j++;
		}
		
	}
	cout<<"FACTORS OF "<<n<<" ARE---> ";
	for(i=0;i<j;i++){
		cout<<" "<<f[i]<<" ";
		
	}
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"\nFACTORIAL OF "<<n<<" IS----> "<<fact;
}
