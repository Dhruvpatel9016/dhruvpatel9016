#include<stdio.h>

void add(int a,int b)
{
	printf("\nAddition : %d",(a+b));
}

void main()
{
	int a,b;
	printf("\nEnter A, B : ");
	scanf("%d%d",&a,&b);
	add(a,b);
}