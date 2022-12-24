#include<stdio.h>

int add(int a,int b)
{
	printf("\nIn function A = %d , B = %d ",a,b);
	return a+b;
}
void main()
{
	int res,a,b;
	printf("\nEnter A = ");
	scanf("%d",&a);
	printf("\nEnter B = ");
	scanf("%d",&b);
	res = add(a,b);
	
	printf("\n\n\t%d+%d=%d\n",a,b,res);
	if(res%2==0)
	{
		printf("\n %d is Even",res);
	}
	else
	{
		printf("\n %d is odd",res);
	}
} 