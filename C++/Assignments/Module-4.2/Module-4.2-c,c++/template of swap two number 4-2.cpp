#include<iostream>
using namespace std;
template<class t>
class name
{
	private:
		t a;
		t b;
		t temp;
		
		public:
			name(t n1,t n2)
			{
				a=n1;
				b=n2;
			}
			
			void swap()
			{
				a=a+b;
				b=a-b;
				a=a-b;
			}
			
			void check()
			{
				cout<<"\n\n\t\t A ="<<a;
				cout<<"\n\n\t\t B ="<<b;
			}
};

int main()
{
	int a,b;
	cout<<"\n\n\t\t ENTER A :";
	cin>>a;
	cout<<"\n\n\t\t ENTER B :";
	cin>>b;
	name <int>nm(a,b);
	cout<<"\n\n\t\t----------------------before swaping";
	nm.check();
	cout<<"\n\n\t\t----------------------after  swaping";
	nm.swap();
	nm.check();
	
	return 0;
}