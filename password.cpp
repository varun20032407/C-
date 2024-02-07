#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[100];
	printf("Enter the username:- ");
	scanf("%s",&a);
	printf("Re-Enter the username:- ");
	scanf("%s",&b);
	if(strcmp(a,b)==0){
		printf("THE USERNAME IS VALID");
	}
	else{
		printf("THE USERNAME IS NOT VALID");
	}
	return 0;
}
