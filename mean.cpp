#include<iostream>
using namespace std;
int main(){
	cout<<"\n---------MEAN-------MEDIAN-------MODE---------\n";
	int arr[]={1,1,2,2,2};
	int n=5,i,j,z,tmp,mc,mv;
	int tally[n];
	float tot=0;
	float mean=0;
	float median=0;
	float mid=0;
	for(int i=0;i<n;i++){
	tot=tot+arr[i];
	}
	mean=tot/n;
	cout<<"\nThe mean value= \n"<<mean;
	if(n%2==0){
		int temp=(n/2)-1;
		for(int i=0;i<n;i++){
			if(temp==i||(temp+1)==i){
				mid=mid+arr[i];
			}
		}
	mid=mid/2;
	cout<<"The median value= "<<mid;
	}
	else{
		 int temp=(n/2);
		 for(int i=0;i<n;i++){
		 	if(temp==i){
		 		int mid=arr[i];
		 		cout<<"\nThe median value= \n"<<mid;
			 }
		 }
	}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(arr[j]>arr[j+1]){
					tmp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=tmp;
				}
			}
		}
		for(i=0;i<n;i++){
			for(z=i+1;z<n;z++){
				if(arr[i]=arr[z]){
					tally[i]++;
				}
			}
		}
		mc=0;
		mv=0;
		for(i=0;i<n;i++){
			if(tally[i]>mc){
				mc=tally[i];
				mv=arr[i];
			}
		}
		cout<<"\nThe mode value= \n"<<mv;
		return 0;
}
