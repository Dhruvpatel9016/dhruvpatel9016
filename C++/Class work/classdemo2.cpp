#include<iostream>
using namespace std;

class employee
{
	public:
	void showdetails(int eid,string name,double salary)
		{
			cout<<"\nEnter Id : "<<eid;
			cout<<"\nEnter Name : "<<name;
			cout<<"\nEnter Salary : "<<salary;
		}
};

int main()
{
	int eid;
	string name;
	double salary;
		
	cout<<"\nEnter Id : ";
	cin>>eid;
	fflush(stdin);		//...for enter useing as comand 
	cout<<"\nEnter Name : ";
	getline(cin,name);		//...use for geting space 
			
	cout<<"\nEnter Salary : ";
	cin>>salary;
	
	employee emp;
	emp.showdetails(eid,name,salary);
	
	return 0;
}