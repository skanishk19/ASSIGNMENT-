#include <stdio.h>
int main()
{
    int num1, num2;
    char op, temp = '%';
    printf("Enter the value of num1 and num2\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter '+' for addition\n");
    printf("Enter '-' for subtraction\n");
    printf("Enter '*' for multiplication\n");
    printf("Enter '/' for division\n");
    printf("Enter '%c' for remainder\n", temp);

    printf("Enter the operator\n");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("The difference of %d and %d is %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("The product of %d and %d is %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("The quotient of %d and %d is %f", num1, num2, (float)num1 / (float)num2);
        break;
    case '%':
        printf("The remainder of %d and %d is %f", num1, num2, num1 % num2);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}