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
class C :public B
{
	public:
		int c;
		
		 void getC()
		 {
		 	cout<<"\nEnter C : ";
		 	cin>>c;
		 }
		 void putC()
		 {
		 	cout<<"\nC = "<<c;
		 }
};

int main()
{	
	C obj;
	obj.getA();
	obj.getB();
	obj.getC();
	
	obj.putA();
	obj.putB();
	obj.putC();
	
	return 0;
}