#include<stdio.h>
void main()
{
	int n,remainder,sum=0;

	printf("##__Sum of Digits by given Number__##");

	printf("\nEnter number : ");
	scanf("%d",&n);
	while(n>0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf("\nSum of all Digits are : %d",sum);
}