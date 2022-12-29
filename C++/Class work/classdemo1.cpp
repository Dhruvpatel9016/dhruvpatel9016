#include<iostream>
using namespace std;

class employee
{
	public:
		int eid;
		string name;
		float salary;
		
		void getdetails()
		{
			cout<<"\nEnter Id : ";
			cin>>eid;
			
			fflush(stdin);		//...for enter useing as comand 
			cout<<"\nEnter Name : ";
			//cin>>name;
			getline(cin,name);		//...use for geting space 
			
			cout<<"\nEnter Salary : ";
			cin>>salary;
		}
		
		void showdetails()
		{
			cout<<"\nEnter Id : "<<eid;
			cout<<"\nEnter Name : "<<name;
			cout<<"\nEnter Salary : "<<salary;
		}
};

int main()
{
	employee emp;
	emp.getdetails();
	emp.showdetails();
	
	return 0;
}