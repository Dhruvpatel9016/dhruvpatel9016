#include <stdio.h>

int main() {
	int i,j;
	printf("##__How Many Even Numbers Are There__##");
	printf("\nEnter number = ",j);
	scanf("%d",&j);
	for (i = 1; i <= j; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}