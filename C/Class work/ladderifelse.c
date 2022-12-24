#include<stdio.h>

void main()
{
	int rollno,s1,s2,s3,tot;
	char name[20];
	float per;
	printf("Enter Name: ");
	scanf("%s",&name);
	printf("Enter Rollno: ");
	scanf("%d",&rollno);
	printf("Enter Physics marks: ");
	scanf("%d",&s1);
	printf("Enter Chemistry marks: ");
	scanf("%d",&s2);
	printf("Enter Maths marks: ");
	scanf("%d",&s3);
	tot = s1+s2+s3;
	per = (float)tot/3;
	
	printf("\nRollno. : %d",rollno);
	printf("\nName : %s",name);
	printf("\nTotal : %d",tot);
	printf("\nPercentage : %.2f",per);
	
	if(per>=75)
	{
		printf("\nDistinction");

	}

	else if(per>=60)
	{
		printf("\nFirst class");
	}
	
	else if(per>=50)
	{
		printf("\nSecond class");
	}
	else if(per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nFail...!");
	}
}