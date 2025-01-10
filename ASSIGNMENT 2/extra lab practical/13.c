#include <stdio.h>
int main()
{
    int num1, i, rev, rem;
    printf("\nEnter the value of num1:");
    scanf("%d", &num1);
    rev = 0;
    int temp = num1;
    while (num1 != 0)
    {
        rem = num1 % 10;
        rev = rev * 10 + rem;
        num1 = num1 / 10;
    }
    if (temp == rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}