#include<iostream>
using namespace std;
class book
{
	public:
	string author,title,publisher;
	int price;
	void inputdata()
	{
		cout<<"Name of author:- ";
		cin>>author;
		cout<<"Name of title:- ";
		cin>>title;
		cout<<"Name of price:- ";
		cin>>price;
		cout<<"Name of publisher:- ";
		cin>>publisher;
	}
	void displaydata()
	{
		cout<<"\nName of author:- "<<author;
		cout<<"\nName of title:- "<<title;
		cout<<"\nName of price:- "<<price;
		cout<<"\nName of publisher:- "<<publisher;
	}
};
main()
{
	book k;
	k.inputdata();
	k.displaydata();
}
