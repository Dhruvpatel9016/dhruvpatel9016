#include<stdio.h>

void main()
{
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			break;
		}
		printf("\t%d\n",i);
	}
	
//	pattern-1
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	
}