#include<iostream>
using namespace std;

class Dhruv{
	private:
		int money;
		friend int Vivek(Dhruv);
	public:
		Dhruv()
		{
			money=0;
		}
};

int Vivek(Dhruv d) 
{
	d.money=5000;
	return d.money;
}

int main()
{
	Dhruv d;
	cout<<"\nVivek has given Rs."<<Vivek(d)<<" to Dhruv.";
	return 0;
}