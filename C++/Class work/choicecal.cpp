#include<iostream>
using namespace std;

int main()
{
	//int a=23,b=25;
	int a,b,ch;
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\n\tA = "<<a<<",B = "<<b;
	
	cout<<"\n\n\t##_-_-_Menu_-_-_##";
	cout<<"\n\n\tPress 1. Addition";
	cout<<"\n\tPress 2. Subtraction";
	cout<<"\n\tPress 3. Multiplication";
	cout<<"\n\tPress 4. Division";
	cout<<"\n\n\tEnter your choice :- ";
	cin>>ch;
	
	switch(ch)
	{
	case 1 :
		cout<<"\n\tAddition : "<<(a+b);
		break;
	case 2 :
		cout<<"\n\tSubtraction : "<<(a-b);
		break;
	case 3 :
		cout<<"\n\tMultiplication : "<<(a*b);
		break;
	case 4 :
		cout<<"\n\tDivision : "<<((float)a/b);
		break;
	default:
		cout<<"\n\tInvalid choice";
		break;
	}
	
	return 0;
}