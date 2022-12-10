#include<stdio.h>

void main()
{
	int i,j;
	
	printf("Enter your no.:- ");
	scanf("%d",&j);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",j,i,j*i);
	}
}