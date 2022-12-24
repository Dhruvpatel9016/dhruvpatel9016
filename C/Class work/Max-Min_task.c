#include<stdio.h>

void main()
{
	int a,b;
	printf("\nEnter no. :- ");
	scanf("%d",&a);
	printf("\nEnter no. :- ");
	scanf("%d",&b);
	printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2 Results:-Max-Min-Equal \xB2\xb2\xB2\xB2\xB2\xB2\xB2\n\n");
	
	if(a>b)
	{
		printf("\nMax_no. is = %d \nMin_no. is = %d",a,b);
	}
	else if(a<b)
	{
		printf("\nMax_no. is = %d \nMin_no. is = %d",b,a);
	}
	else{
		printf("\n%d and %d are equal\nSo...both are same!",a,b);
	}
}