#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,i,arr[100];
	cout<<"Enter the starting range:-";
	cin>>a;
	cout<<"Enter the ending range:- ";
	cin>>b;
	int j=0;
	for(i=a;i<=b;i++)
	{
		float y=sqrt(i);
		int p;
		p=int(y);
		if((y-p)==0)
		{
			arr[j]=i;
			j++;
		}
	}
	int sum,r;
	cout<<"\nPERFECT NUMBER:- ";
	for(i=0;i<j;i++)
	{
		if(arr[i]<10)
		{
			cout<<" "<<arr[i];
		}
		sum=0;
		int t=arr[i];
		while(t!=0)
		{
			r=t%10;
			sum+=r;	
			t=t/10;
		}
		if(sum<10)
		{
			cout<<" "<<arr[i];
		}	
	}
}
