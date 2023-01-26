#include<iostream>
using namespace std;

int main()
{
	string name1 = "Dhruv";
	string name2;
	cout<<"Name : "<<name1;
	name1=name2;
	cout<<"\nName : "<<name2;
	cout<<"\nString Concatenate : "<<name1 + name2;
	int len= name2.size();
	cout<<"\nString Lenth : "<<len;
}