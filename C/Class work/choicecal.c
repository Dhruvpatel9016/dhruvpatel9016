#include<stdio.h>

void main()
{

	printf("\n\t\xB2\xB2\xB2\xB2\xB2\xB2 Calculator \xB2\xB2\xB2\xB2\xB2\xB2");
	int a,b,ch;
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
	printf("\nEnter your choice ?");
	scanf("%d",&ch);
	
	switch(ch)
	{
	case '1':printf("\n\tAddition : %d",(a+b));
	         break;
	case '2':printf("\n\tSubtraction : %d",(a-b));
	         break;
	case '3':printf("\n\tMultiplication : %d",(a*b));
	         break;
	case '4':printf("\n\tDivision : %.2f",(a/b));
	         break;
	default:printf("\nInvalid choice");
			 break;

    }
}