#include<iostream>
using namespace std;
class Matrix
{
	public:
		int a[100],mat[100],i;
		void input()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\nEnter Element ["<<i<<"] : ";
				cin>>a[i];
			}
		}
		void display()
		{
			for(i=0;i<5;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
		Matrix operator+(Matrix x)
		{
//			Matrix m;
			for(i=0;i<5;i++)
			{
			    mat[i]=a[i] + x.a[i];
			}
			for(i=0;i<5;i++)
			{
				cout<<mat[i]<<"\t";
			}
			return x;
		}
};

int main()
{
	Matrix m,n;
	cout<<"--------------------------------------\n";
	cout<<"\tEnter Matrix 1 Element";
	cout<<"\n--------------------------------------\n";
	m.input();
	cout<<"\n--------------------------------------\n";
	cout<<"\tEnter Matrix 2 Element";
	cout<<"\n--------------------------------------\n";
	n.input();
	cout<<"\n\n--------------------------------------\n";
	cout<<"\t\tMatrix 1";
	cout<<"\n--------------------------------------\n\n";
	m.display();
	cout<<"\n\n--------------------------------------\n";
	cout<<"\t\tMatrix 2";
	cout<<"\n--------------------------------------\n";
	n.display();
	cout<<"\n--------------------------------------\n\n";
	cout<<"\n--------------------------------------\n";
	cout<<"\tAddition of Two Matrix ";
	cout<<"\n--------------------------------------\n";
	m+n;
	return 0;
}