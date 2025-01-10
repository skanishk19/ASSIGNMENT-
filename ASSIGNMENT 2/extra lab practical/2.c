#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    printf("\n\n");
    if (i > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is negative\n");
    }
    printf("\n\n");
    if (i % 3 == 0 && i % 5 == 0)
    {
        printf("The number is divisible by 3 and 5\n");
    }
    else
    {
        printf("The number is not divisible by 3 and 5\n");
    }

    return 0;
}