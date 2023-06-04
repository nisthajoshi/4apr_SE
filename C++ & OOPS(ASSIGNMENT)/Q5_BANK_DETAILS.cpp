#include<iostream>
using namespace std;
class bank
{
	public:
		string depositor; 
		int no;
		string acc;
		int bal,dep,withdraw;
		void inputdata() 
		{
			cout<<"Enter Name of the depositor:- ";
			cin>>depositor;
			cout<<"Enter Account number:- ";
			cin>>no;
			cout<<"Enter Type of account:- ";
			cin>>acc;
			cout<<"Enter Balance in account:- ";
			cin>>bal;
			cout<<"Deposited amount:- ";
			cin>>dep;
		}
		void displaydata()
		{
			cout<<"\nName of the depositor:- "<<depositor;
			cout<<"\nAccount number:- "<<no;
			cout<<"\nTypes of Account:- "<<acc;
			cout<<"\nBalance in account:- "<<bal;
			cout<<"\nDeposited in account:- "<<dep;
			cout<<"\nTotal amount in acconut:- "<<bal+dep;
		}
		void with()
		{
			cout<<"\n\nWithdraw an amount:- ";
			cin>>withdraw;
		}
		void output()
		{
			cout<<"\nName of the depositor:- "<<depositor;
			cout<<"\nWithdraw amount:- "<<withdraw;
			cout<<"\nTotal amount in account:- "<<bal+dep-withdraw;
			
		}
};
main()
{
	bank b;
	b.inputdata();
	b.displaydata();
	b.with();
	b.output();
}
