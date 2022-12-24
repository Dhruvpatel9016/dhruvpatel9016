#include<stdio.h>

void main()
{
	int array1[5];
	int i;
	
	printf("\nEnter Array 1 Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("\n\nArray1 Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",array1[i]);
	}
}