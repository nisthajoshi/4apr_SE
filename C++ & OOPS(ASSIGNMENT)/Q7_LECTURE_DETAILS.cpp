#include<iostream>
using namespace std;
class lecture
{
	public:
		string lecturer, subject, course;
		char details[20];
		int n_lecturers;
		void input()
		{
			cout<<"Name of the lecturer:- ";
			cin>>lecturer;
			cout<<"Name of the subject:- ";
			cin>>subject;
			cout<<"Name of the course:- ";
			cin>>course;
			cout<<"Number of the lecturers:- ";
			cin>>n_lecturers;
			cout<<"Add a lecture details:- ";
			cin>>details;
		}
		void output()
		{
			cout<<"\nName of the lecturer:- "<<lecturer;
			cout<<"\nName of the subject:- "<<subject;
			cout<<"\nName of the course:- "<<course;
			cout<<"\nNumber of the lecturers:- "<<n_lecturers;
			cout<<"\nLecture details:- "<<details;
		}
};
main()
{
	lecture m;
	m.input();
	m.output();
}

