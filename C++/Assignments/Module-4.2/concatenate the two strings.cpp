#include<iostream>
#include<string.h>
using namespace std;

class addstring
{
	public:
		char str[100];
		void input()
		{
			cout<<"\n\t enter your string :";
			cin . getline(str,100);
		}
		
		void display()
		{
			cout<<"\n\t concatenate string :"<<str;
		}
		
		addstring operator+(addstring s)
		{
			addstring o;
    		strcat(str,s.str);
			strcpy(o.str,str);
			return o;
		}	
};

int main()
{
	addstring s1,s2,s3;
	s1.input();
	s2.input();
	s3 = s1+s2;
	s3.display();
	return 0;
}