#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter the value:");
	scanf("%d",&a);
	printf("\nEnter the value:");
	scanf("%d",&b);
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2Results of a and b values\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\nAddition : %d",(a+b));
	printf("\nSubstriction : %d",(a-b));
	printf("\nMultiplicatio : %d",(a*b));
	printf("\nDivision : %.3f",((float)a/b));
	
}