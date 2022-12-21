#include<stdio.h>
void main()
{
	float p,r,t,intrst;
	printf("\n\t\t\##__Simple Interest__##");
	printf("\n\n\t\tEnter Principal Amount : ");
	scanf("%f",&p);
	printf("\n\t\tEnter Rate of Interest : ");
	scanf("%f",&r);
	printf("\n\t\tEnter Time : ");
	scanf("%f",&t);
	intrst=(p*r*t)/100;
	printf("\n\n\t\tInterest is %.2f",intrst);
}