#include<stdio.h>

int add(int a,int b)
{
	printf("\nIn function A = %d , B = %d ",a,b);
	return a+b;
}
void main()
{
	int res;
	res = add(55,50);
	
	printf("\n\n\t%d\n",res);
	if(res%2==0)
	{
		printf("\n %d is Even",res);
	}
	else
	{
		printf("\n %d is odd",res);
	}
} 