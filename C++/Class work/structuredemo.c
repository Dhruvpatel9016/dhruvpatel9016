#include<stdio.h>

struct Employee
{
	int eid;
	char ename[10];
	float esal;
};

void main()
{
	struct Employee emp;
	printf("\nEnter Id : ");
	scanf("%d",&emp.eid);
	printf("Enter Name : ");
	scanf("%s",&emp.ename);
	printf("Enter Salary : ");
	scanf("%f",&emp.esal);	
	printf("\n##_-_-_-Detalis_-_-_-_##");
	printf("\n\nId : %d",emp.eid);
	printf("\nName : %s",emp.ename);
	printf("\nSalary : %.2f",emp.esal);
	
	printf("\n\nSize of Structure is : %d Bytes",sizeof(emp));
}