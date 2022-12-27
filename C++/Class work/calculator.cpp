#include<iostream>
using namespace std;

int main()
{
	//int a=23,b=25;
	int a,b;
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	cout<<"\nA = "<<a<<",B = "<<b;
	
	cout<<"\nAddition : "<<(a+b);
	cout<<"\nSubtraction : "<<(a-b);
	cout<<"\nMultiplication : "<<(a*b);
	cout<<"\nDivision : "<<((float)a/b);

	return 0;
}