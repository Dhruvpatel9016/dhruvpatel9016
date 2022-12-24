#include <stdio.h>

int main()
{
    int i, n;
    printf("##__How Many Odd Numbers Are There__##");
    printf("Enter number : ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);

   
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}