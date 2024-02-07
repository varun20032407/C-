#include<iostream>
using namespace std;
int main(){
	int rows,a=1,i,j,number;
	cout<<"Enter number of rows= ";
	cin>>rows;
	for(int i=0;i<rows;i++){
		for(int space=1;space<=rows-i;space++)
		cout<<" ";
		for(int j=0;j<=i;j++){
			if(j==0||i==0)
			a=1;
			else
			a=a*(i-j+1)/j;
			cout<<a<<" ";
			++number;
		}
		cout<<endl;
	}
	return 0;
}
