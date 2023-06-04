#include<iostream>
using namespace std;
class cricketer
{
	public:
		void cri()
		{
			cout<<"Total runs:- 150";
			cout<<"\nAverage runs:- 15";
		}
};
class batsman: public cricketer
{
	public:
		void bat()
		{
			cout<<"\nBest performance:- MS Dhoni";
		}
};
main()
{
	batsman s;
	s.cri();
	s.bat();
}
