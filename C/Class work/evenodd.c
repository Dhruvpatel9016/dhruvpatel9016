#include<stdio.h>

void main()
{
	int a;
	printf("\nEnter A:- ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("\n%d is Even.",a);
	}
	else
	{
		printf("\n%d is Odd.",a);
	}
}