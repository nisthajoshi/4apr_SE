#include<iostream>
using namespace std;
class person
{
	public:
		void per()
		{
			cout<<"Name = Nistha";
			cout<<"\nAge = 22";
		}
};

class student
{
	public:
		void stu()
		{
			cout<<"\nPercentage = 87%";
		}
};

class teacher: public person, public student
{
	public:
		void sal()
		{
			cout<<"\nSalary = 1,00,000rs";
		}
};

main()
{
	teacher obj;
	obj.per();
	obj.stu();
	obj.sal();
}
