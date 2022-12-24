#include<stdio.h>

void main()
{
	
	int a,b;
	
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2 Calculator \xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\tEnter A.: ");
	scanf("%d",&a);
	printf("\tEnter B.: ");
	scanf("%d",&b);
	printf("\n\tA.: %d , B.: %d\n",a,b);
	
	
	printf("\n\tAddition : %d",(a+b));
	printf("\n\tSubstriction : %d",(a-b));
	printf("\n\tMultiplicatio : %d",(a*b));
	printf("\n\tDivision : %.3f",((float)a/b));
}