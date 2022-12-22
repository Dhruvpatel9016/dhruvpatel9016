#include<stdio.h>

union Employee
{
	int eid;
	char ename[10];
	float esal;
};

void main()
{
	union Employee emp;
	
	printf("\n\nEnter Id : ");
	scanf("%d",&emp.eid);
	printf("_-_Id : %d",emp.eid);
	
	printf("\n\nEnter Name : ");
	scanf("%s",&emp.ename);
	printf("_-_Name : %s",emp.ename);
	
	printf("\n\nEnter Salary : ");
	scanf("%f",&emp.esal);
	printf("_-_Salary : %.2f",emp.esal);
	
	printf("\n\nSize of Union is : %d Bytes",sizeof(emp));
	
	
}