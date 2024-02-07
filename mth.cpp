#include<iostream>
using namespace std;
int main(){
	int arr[100],m,n,i,n1,sum,dif;
	cout<<"ENTER THE RANGE OF ELEMENTS---> ";
	cin>>n1;
	for(i=0;i<n1;i++){
		cout<<"ENTER THE ELEMENTS--> ";
		cin>>arr[i];
	}
	int temp;
	for(i=0;i<n1;i++){
		for(int j=i+1;j<n1;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n1;i++){
		cout<<"\n"<<arr[i]<<"\n";
	}
	cout<<"\nENTER THE VALUE OF M---> ";
	cin>>m;
	cout<<"\nENTER THE VALUE OF N---> ";
	cin>>n;
	cout<<"\nNTH MINIMUM NUMBER---> "<<arr[n-1];
	dif=arr[n-1];
	for(i=0;i<n1;i++){
		for(int j=i+1;j<n1;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"\nMTH MAXIMUM NUMBER---> "<<arr[m-1];
	sum=arr[m-1];
	cout<<"\nSUM---> "<<sum+dif;
	cout<<"\nDIFFERENCE---> "<<sum-dif;
}
