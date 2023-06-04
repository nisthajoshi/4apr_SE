#include<iostream>
#include<fstream>
using namespace std;
class nistha
{   
	public:
		string data;
		void sa()
		{
			ofstream file1;
			file1.open("test.txt");
			
			cout<<"Enter data:- ";
			cin>>data;
		}
		void qw()
		{
			cout<<data;
		}
};
main()
{
	nistha s;
	s.sa();
	s.qw();
}
