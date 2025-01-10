#include <stdio.h>
int main()
{
    int term, num1, num2, i, num3;
    num1 = 0;
    num2 = 1;
    printf("Enter the number of terms:");
    scanf("%d", &term);
    for (i = 0; i < term; i++)
    {
        num3 = num1 + num2;
        printf("%d", num3);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}