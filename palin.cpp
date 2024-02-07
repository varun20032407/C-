#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char string1[20];
	int i,l;
	int flag=0;
	cout<<"Enter the string:- ";
	cin>>string1;
	l=strlen(string1);
	for(i=0;i<l;i++){
		if(string1[i]!=string1[l-i-1]){
			flag=1;
			break;
		}
	}
	if(flag){
		cout<<"Is not a palindrome"<<string1<<endl;
	}
	else{
		cout<<"Is a palindrome "<<string1<<endl;
	}
}
