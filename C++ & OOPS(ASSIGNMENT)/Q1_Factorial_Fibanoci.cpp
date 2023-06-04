#include<iostream>
using namespace std;
class factorial
{
	public:
	int a,i,f=1;
	int n=0,b=1,c;
	void inputdata()
	{
		cout<<"Enter a number to find factorial and Fibanocci :- ";
		cin>>a;
		for(i=1;i<=a;i++)
		{
			f=f*i;
		}
	}
	void displaydata()
	{
		cout<<"Factorial = "<<f<<endl;
		cout<<"Fibanocci = ";
		for(i=1;i<=a;i++)
		{
		cout<<" "<<c;
			c=n+b;
			n=b;
			b=c;
		}
	}
};
main()
{
	factorial fact;
	fact.inputdata();
	fact.displaydata();
}





