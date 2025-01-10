#include <stdio.h>
int main()
{
    int num, sum, rev, rem;
    printf("\nEnter the value of num1");
    scanf("%d", &num);
    int temp = num;
    sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("\n %d sum of no is %d", temp, sum);
    printf("\n\n");
    num = temp;
    rev = 0;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("\n  reverse no is %d",rev);
    return 0;
}