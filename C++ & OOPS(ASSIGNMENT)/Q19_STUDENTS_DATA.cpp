#include<iostream>
using namespace std;
class student
{
	public:
		void roll()
		{
			cout<<"Roll number = 1";
		}
};

class test: public student
{
	public:
		void mar()
		{
			cout<<"\n\nSubject 1 = 87 marks";
			cout<<"\nSubject 2 = 91 marks";
		}
};

class result: public test
{
	public:
		void res()
		{
			cout<<"\n\nTotal marks\nSubject 1 = 100 marks\nSubject 2 = 100 marks";
		}
};

main()
{
	result obj;
	obj.roll();
	obj.mar();
	obj.res();
}
