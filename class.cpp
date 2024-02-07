#include <iostream>
using namespace std;
class addition
{
	int numb;
public:
    void getdetails(int a)
    {
    	numb=a;
	}
	void display(void)
	{
		cout<<" number is : "<<numb;
	}
};

int main()
{
	addition a1,a2;
	a1.getdetails(12);
	a2.getdetails(13);
	a1.display();
	a2.display();
}
