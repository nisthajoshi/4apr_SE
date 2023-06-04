#include<iostream>
using namespace std;
class calculator
{
	public:
	float a,b;
	void inputdata()
	{
		cout<<"Enter value of a :- ";
		cin>>a;
		cout<<"Enter value of b :- ";
		cin>>b;
	}
	void displaydata()
	{
		cout<<"Addition = "<<a+b<<endl;
		cout<<"Substraction = "<<a-b<<endl;
		cout<<"Multiplication = "<<a*b<<endl;
		cout<<"Division = "<<a/b<<endl;
	}
	
};
main()
{
	calculator clr;
	clr.inputdata();
	clr.displaydata();
}





