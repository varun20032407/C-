#include <iostream>
using namespace std;
int main()
{
	int i,j,rows;
	cout<<"\n\n Display the pattern using repeating for a row:\n ";
	cout<<"-----------------------------------------------------\n";
	cout<<"Input the no.of rows:- ";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		cout<<i;
		cout<<endl;
	}
	return 0;
	
}
