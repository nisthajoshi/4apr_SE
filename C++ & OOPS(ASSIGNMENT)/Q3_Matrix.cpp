#include<iostream>
using namespace std;
class matrix
{
	public:
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int row,col;
};
main()
{
	matrix m;
	for(m.row=0;m.row<3;m.row++)
    {
    	cout<<"MATRIX";
    	for(m.col=0;m.col<3;m.col++)
    	{
    		cout<<" "<<m.a[m.row][m.col];
		}
		cout<<endl;
	}
}
