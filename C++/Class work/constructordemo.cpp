#include<iostream>
using namespace std;
/*
3 Types of constructors :- default
						   peramiterized
						   copy 
*/

class sample
{
	public:
		string fname,lname;
		int age;
		
		sample()
		{
			cout<<"\nDefault Constructors Called.";
		}
		
		sample(string f,string l,int a)
		{
			cout<<"\nParameterized Constructor Called.";
			fname = f;
			lname = l;
			age = a;
		}
		sample(const sample &obj)
		{
			cout<<"\n\nCopy Constructor Called.";
			fname = obj.fname;
			lname = obj.lname;
			age = obj.age;
		}
		void display()
		{
			cout<<"\n\nFirst Name : "<<fname<<"\nLast Name : "<<lname<<"\nAge : "<<age;
		}
		
};

int main()
{
	sample vivek,obj1("Vivek","Rasadiya",24);
	sample obj2("Dhruv","Patel",21);
	obj1.display();
	obj2.display();
	sample obj(obj1);
	obj.display();
		
	return 0;
}