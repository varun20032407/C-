#include<iostream>
using namespace std;
int main(){
	int ch,i,j,s;
	cout<<"Enter the side of square= ";
	cin>>s;
	cout<<"1.HOLLOW SQUARE\n";
	cout<<"\n2.FULL SQUARE\n";
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"HOLLOW SQUARE PATTERN\n";
			 for(i=0;i<s;i++){
    	for(j=0;j<s;j++){
            if(i==0||i==s-1||j==0||j==s-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            } 
        }
        cout<<"\n";
    }		
			break;
		}
		case 2:{
			cout<<"FULL SQUARE PATTERN\n";
			for(i=0;i<s;i++){
				for(j=0;j<s;j++){
					cout<<"*";
				}
				cout<<"\n";
			}
			break;
		}
		default:
			cout<<"INVALID INPUT";
	}
	return 0;
}
