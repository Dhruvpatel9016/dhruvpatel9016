#include<stdio.h>

void main()
{
	int age;
	char name[50];
	float salary;
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2 Personal Details \xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	printf("\nEnter yor Name: ");
	//scanf("%s",name)
	gets(name);
	printf("\nEnter your Age: ");
	scanf("%d",&age);
	printf("\nEnter your Salary: ");
	scanf("%f",&salary);
	
	printf("\nName is : %s",name);
	printf("\nAge is : %d",age);
	printf("\nSalary is : %.3f",salary);
	
	
}