#include<iostream>
using namespace std;
class matrix
{
	public:
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{4,5,6},{8,7,9},{4,3,2}};
	int c[3][3];
	int row,col;
};
main()
{
	matrix m;
    cout<<"MATRIX A"<<endl;
	for(m.row=0;m.row<3;m.row++)
    {
    	for(m.col=0;m.col<3;m.col++)
    	{
    		cout<<" "<<m.a[m.row][m.col];
		}
		cout<<endl;
	}
    cout<<"MATRIX B"<<endl;
	for(m.row=0;m.row<3;m.row++)
    {
    	for(m.col=0;m.col<3;m.col++)
    	{
    		cout<<" "<<m.b[m.row][m.col];
		}
		cout<<endl;
	}
	cout<<"Addition of two matrix"<<endl;
	for(m.row=0;m.row<3;m.row++)
    {
		for(m.col=0;m.col<3;m.col++)
    	{
    		m.c[m.row][m.col]=m.a[m.row][m.col] + m.b[m.row][m.col];
	        cout<<" "<<m.c[m.row][m.col];
		}
		cout<<endl;
    }
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
