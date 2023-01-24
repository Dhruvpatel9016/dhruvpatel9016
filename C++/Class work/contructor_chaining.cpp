#include<iostream>
using namespace std;

class A{
	public:
	A()
	{
		cout<<"\nA's constructor called.";
	}
	void show()
	{
		cout<<"\nA's method called.";
	}
};
class B : public A{
	public:
	B()
	{
		cout<<"\nB's constructor called.";
	}
	void show()
	{
		A::show();
		cout<<"\nB's method called.";
	}	
};
class C : public B{
	public:
	C()
	{
		cout<<"\nC's constructor called.";
	}
	void show()
	{
		B::show();
		cout<<"\nC's method called.";
	}	
};


int main()
{
	C obj;
	obj.show();
	return 0;
}