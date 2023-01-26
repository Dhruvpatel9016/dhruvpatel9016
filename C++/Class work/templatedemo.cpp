#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b)
{
	return a+b;
}

int main()
{
	cout<<"\nAdd using Integer Type : "<<add<int>(10,20);
	cout<<"\nAdd using Float Type : "<<add<float>(10.45f,20.50f);
	cout<<"\nAdd using String Type : "<<add<string>("Tops ","Tech");
	
	return 0;
}