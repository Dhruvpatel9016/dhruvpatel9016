#include<stdio.h>
void main()
{
	int n,remainder,large=0;

	printf("##__Find Max Digit__##");

	printf("\nEnter Number : ");
	
	scanf("%d",&n);
	while(n>0)
	{
		remainder=n%10;
		if(large<remainder)
		{
			large=remainder;
		}
		n=n/10;
	}
	printf("\nMax Number is : %d.",large);
}