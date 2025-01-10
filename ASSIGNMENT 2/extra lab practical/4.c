#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the value of num1 and num2\n");
    scanf("%d %d", &num1, &num2);
    printf("Enter the value of num3\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The largest number is %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The largest number is %d", num2);
    }
    else
    {
        printf("The largest number is %d", num3);
    }
    if (num1 < num2 && num1 < num3)
    {
        printf("The smallest number is %d", num1);
    }
    else if (num2 < num1 && num2 < num3)
    {
        printf("The smallest number is %d", num2);
    }
    else
    {
        printf("The smallest number is %d", num3);
    }
    printf("\n\n");
    switch (num1 >= num2 && num1 >= num3)
    {
    case 1:
        printf("The largest number is %d", num1);
        break;
    case 0:
        switch (num2 >= num1 && num2 >= num3)
        {
        case 1:
            printf("The largest number is %d", num2);
            break;
        case 0:
            printf("The largest number is %d", num3);
            break;

        default:
            printf("Error");
            break;
        }
        break;
    default:
        printf("Error");
        break;
    }
    switch (num1 <= num2 && num1 <= num3)
    {
    case 1:
        printf("The smallest number is %d", num1);
        break;
    case 0:
        switch (num2 <= num1 && num2 <= num3)
        {
        case 1:
            printf("The smallest number is %d", num2);
            break;
        case 0:
            printf("The smallest number is %d", num3);
            break;
        
        default:
            printf("Error");
            break;
        }
        break;
    
    default:
        printf("Error");
        break;
    }
    return 0;
}