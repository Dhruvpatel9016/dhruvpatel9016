#include<stdio.h>

void main()
{
	int array1[5],array2[5];
	int i;
	
	printf("\nEnter Array 1 Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("\nEnter Array 2 Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array2[i]);
	}
		
	printf("\n\nArray1 Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",array1[i]);
	}
	printf("\n\nArray2 Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",array2[i]);
	}

	
	printf("\n\nAddition of 2 Arrays are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",(array1[i]+array2[i]));
	}
		
}