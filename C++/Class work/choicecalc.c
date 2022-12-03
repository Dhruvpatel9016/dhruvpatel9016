#include<stdio.h>

void main()
{

	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2 Calculator \xB2\xB2\xB2\xB2\xB2\xB2");
	int a,b,choice;
	printf("\n\n\tEnter A.: ");
	scanf("%d",&a);
	printf("\tEnter B.: ");
	scanf("%d",&b);
	printf("\n\tA.: %d , B.: %d",a,b);
	
	printf("\n\n\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\tPress 1. Addition");
	printf("\n\tPress 2. Subtraction");
	printf("\n\tPress 3. Multiplication");
	printf("\n\tPress 4. Division");
	printf("\n\n\tEnter your choice ? ",choice);
	scanf("%d",&choice);
	 
	if(choice==1)
	{
		printf("\n\tAddition : %d",(a+b));
	}
	else if(choice==2)
	{
		printf("\n\tSubtraction : %d",(a-b));
	}
	else if(choice==3)
	{
		printf("\n\tMultiplication : %d",(a*b));
	}
	else if(choice==4)
	{
		printf("\n\tDivision : %.2f",(a/b));
	}
	else
	{
		printf("\n\tInvalid choice");
	}
	
	
	
	

}