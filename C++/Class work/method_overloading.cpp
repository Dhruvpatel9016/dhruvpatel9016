#include<iostream>
using namespace std;

class A{
	public:
	A()
	{
		cout<<"\nA's constructor called.";
	}
};
class B : public A{
	public:
	B()
	{
		cout<<"\nB's constructor called.";
	}	
};
class C : public B{
	public:
	C()
	{
		cout<<"\nC's constructor called.";
	}	
};


int main()
{
	C obj;
	
	return 0;
}