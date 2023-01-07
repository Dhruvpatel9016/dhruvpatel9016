#include<iostream>
using namespace std;

class side{
	protected:
		int l;
	public:
		void setvel(int x)
		{
			l = x;
		}
};

class square : public side
{
	public:
		int sqr()
		{
			return l*l;
		}
};

class cube : public side
{
	public:
		int cub()
		{
			return l*l*l;
		}
};

int main()
{
	square sq;
	cube cb;
	int val;
	cout<<"\nEnter value : ";
	cin>>val;
	sq.setvel(val);
	int s = sq.sqr();
	cout<<"\nSquare is : "<<s;
	//cout<<"\nSquare is : "<<sq.sqr();

	if(s%2==0)
	{
		cout<<"\nSquare is Even";
	}
	else
	{
		cout<<"\nSquare is Odd";
	}
	
		
	int val1;
	cout<<"\n\nEnter value : ";
	cin>>val1;
	cb.setvel(val1);
	int c = cb.cub();
	(c>s)?cout<<"\nCube is greater ":cout<<"\nSquare is larger ";
	
	return 0;
}