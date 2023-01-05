#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		 
		 void getA()
		 {
		 	cout<<"\nEnter A : ";
		 	cin>>a;
		 }
		 void putA()
		 {
		 	cout<<"\nA = "<<a;
		 }
};
class B :public A
{
	public:
		int b;
		
		 void getB()
		 {
		 	cout<<"\nEnter B : ";
		 	cin>>b;
		 }
		 void putB()
		 {
		 	cout<<"\nB = "<<b;
		 }
};

int main()
{	
	B obj2;
	obj2.getA();
	obj2.getB();
	obj2.putA();
	obj2.putB();
	return 0;
}