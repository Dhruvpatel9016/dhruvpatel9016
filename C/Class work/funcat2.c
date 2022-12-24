#include<stdio.h>

void work(int a)
{
	printf("IN Function A = %d ",a);
	if(a%2==0)
	{
		printf("\n %d is Even",a);
	}
	else
	{
		printf("\n %d is Odd",a);
	}
}

void main()
{
	int a;
	printf("\nEnter Value : ");
	scanf("%d",&a);
	work(a);
}