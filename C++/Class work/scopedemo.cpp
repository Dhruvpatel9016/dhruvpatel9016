#include<iostream>
using namespace std;

class scopedemo{
	public:
		string name,address="surat";
		int age=43;
		
		void getname();
		void details();
};

void scopedemo::getname()
{
	cout<<"\nEnter Name : ";
	getline(cin,name);
}

void scopedemo::details()
{
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
	cout<<"\nAddress : "<<address;
}

int main()
{
	scopedemo s1;
	s1.getname();
	s1.details();
	return 0;
}