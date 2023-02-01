#include<iostream>
using namespace std;

class cricketer
{
	public:
		int totalruns;
		string name;
		int averageruns;
		
		void getdetailsa()
		{
			cout<<"\n\n\tenter name of batsmen :";
			cin>>name;
			cout<<"\n\n\tenter total runs of batsmen :";
			cin>>totalruns;
			cout<<"\n\n\tenter average runs of batsmen :";
			cin>>averageruns;
		}
		void putdetaisa()
		{
			cout<<"\n\n\tname  : "<<name;
			cout<<"\n\n\ttotal runs : "<<totalruns;
			cout<<"\n\n\taverage runs : "<<averageruns;
		}		
};
class cricketerb:public cricketer
{
 public:
 	int totalruns;
		string name;
		int averageruns;
		
			void getdetailsb()
		{
			cout<<"\n\n\tenter name of batsmen :";
			cin>>name;
			cout<<"\n\n\tenter total runs of batsmen :";
			cin>>totalruns;
			cout<<"\n\n\tenter average runs of batsmen :";
			cin>>averageruns;
		}
		
		void putdetaisb()
		{
			cout<<"\n\n\tname : "<<name;
			cout<<"\n\n\ttotal runs : "<<totalruns;
			cout<<"\n\n\taverage runs : "<<averageruns;
		}			
};

int main()
{
	cricketerb cri1;
	cri1.getdetailsa();
	cri1.putdetaisa();
	cri1.getdetailsb();
	cri1.putdetaisb();
	return 0;
}