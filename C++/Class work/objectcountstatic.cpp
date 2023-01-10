#include<iostream>
using namespace std;

class sample
{
	public:
		static int objcount;
			
		sample()
		{
			cout<<"\nDefault Constructor Called.";
			objcount++;
		}
};

int sample::objcount=0;

int main()
{
	sample s1,s2,j,d,k;
	cout<<"\n\nObject Count : "<<s1.objcount;
	
	return 0;
}
