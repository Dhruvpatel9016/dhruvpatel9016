#include<stdio.h>

void main()
{
	int array1[5];
	int i,j,temp;
	
	printf("\nEnter the Array Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter Elements [%d] : ",i+1);	
		scanf("%d",&array1[i]);
	}
	printf("\n\nArray Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",array1[i]);	
	}
	
	printf("\n\n\nArray Elements in Ascending order : \n\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array1[i]>array1[j])
			{
				temp = array1[i];
				array1[i] = array1[j];
				array1[j] = temp;
			}
		}
	}			
	for(i=0;i<5;i++)
	{
		printf("%d\t",array1[i]);	
	}
		
	printf("\n\nArray Elements in Descending order : \n\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array1[i]<array1[j])
			{
				temp = array1[i];
				array1[i] = array1[j];
				array1[j] = temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",array1[i]);	
	}			

}
		