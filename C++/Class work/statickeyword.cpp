#include<iostream>
using namespace std;

class statickdemo
{
	public:
	static int a;
	
	void setvel()
	{
		cout<<"\nEnter A : ";
		cin>>a;
	}
	
	void putvel()
	{
		cout<<"\nA = "<<a;
	}
};

int statickdemo::a=0;

int main()
{
	statickdemo d1,d2,d3;
	d1.setvel();
	d2.setvel();
	d3.setvel();
	
	d1.putvel();
	d2.putvel();
	d3.putvel();
	
	return 0;
}