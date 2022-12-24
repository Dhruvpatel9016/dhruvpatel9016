#include <stdio.h>
 

struct employee
{
    char    name[30];
    int     empId;
    float   age;
};
 
int main()
{
    struct employee emp;
     
    printf("\n##__Enter details__##\n");
    printf("\nName :- ");         
    gets(emp.name);
    printf("\nID no. :- ");           
    scanf("%d",&emp.empId);
    printf("\nAge :- ");       
    scanf("%f",&emp.age);
     
    printf("\n##__Entered detail is__##");
    printf("\n\n\tName :- %s",emp.name);
    printf("\n\tId :- %d",emp.empId);
    printf("\n\tAge :- %.3f\n",emp.age);
    return 0;
}