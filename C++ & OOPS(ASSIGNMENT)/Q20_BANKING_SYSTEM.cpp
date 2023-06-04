#include<iostream>
using namespace std;
class current
{
	public:
		void cur()
		{
			cout<<"\n\tCurrent accounts provides Simple interest and withdraw facilities but no cheque book facility";
		}
};

class saving
{
	public:
		void sav()
		{
			cout<<"\n\tSaving accounts provides not Simple interest and withdraw facilities but cheque book facility";
		}
};

class account : public current, public saving
{
	public:
		void details()
		{
			cout<<"\n\n\tCustomer name = Ashutosh";
			cout<<"\n\tAccount number = 12345678";
			cout<<"\n\tType of account = Saving account";
		}
};

class bal
{
	public:
		int deposit,withdraw,balance1,balance,panalty,deposit1;
		void input()
		{
			cout<<"\n\n\tIf you have less than 1000rs in your account, then you will be charged a panalty of 500rs.";
			cout<<"\n\tCompute and deposit interest is:- 50rs";
			cout<<"\n\n\tDeposit amount:- ";
			cin>>deposit;
			balance1= deposit-50;
		}
		
		void output()
		{
			cout<<"\n\tDeposit is:- "<<deposit;
			cout<<"\n\tBalance in your account:- "<<balance1;
		}
		
		void with()
		{
			if(balance1>=1000)
			{
				cout<<"\n\n\tWithdraw an amount:- ";
				cin>>withdraw;
				balance= deposit-50-withdraw;
			}
		}
		
		void wit()
		{
			if(balance1>=1000)
			{
				cout<<"\n\tWithdraw amount:- "<<withdraw;
				cout<<"\n\tBalance in your account:- "<<balance;
			}
		}
		
		void pan()
		{
			if(balance<1000)
			{
				cout<<"\n\n\tPanalty is 500rs";
			}
			
			if(balance<1000)
			{
				cout<<"\n\tPay panalty:- ";
				cin>>panalty;
			}
		}
		
		void pan_n()
		{
			if(panalty==500)
			{
				cout<<"\n\tThanks for panalty";
			}
			
			if(panalty<500 && balance<1000)
			{
				cout<<"\tPlease pay 500rs";
			}
			
			if(panalty>500 && balance<1000)
			{
				cout<<"\tPlease pay 500rs";
			}
		}
		
		void sdd()
		{
			if(panalty==500)
			{
				cout<<"\n\tCompute and deposit interest is:- 50rs";
			}
		
			if(panalty==500)
			{
				cout<<"\n\n\tDeposit amount:- ";
				cin>>deposit1;
			}
		}
		void dss()
		{
			if(panalty==500)
			{
				cout<<"\n\tDeposit is:- "<<deposit1;
				cout<<"\n\tBalance in your account:- "<<deposit1-50;
			}
		}
};

main()
{
	account obj;
	obj.cur();
	obj.sav();
	obj.details();
	
	bal b;
	b.input();
	b.output();
	
	b.with();
	b.wit();
	
	b.pan();
	b.pan_n();
	
	b.sdd();
	b.dss();
}
