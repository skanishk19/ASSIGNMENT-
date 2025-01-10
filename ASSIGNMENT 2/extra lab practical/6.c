#include <stdio.h>
int main()
{
    int num, i, result, range;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    printf("Enter the range\n");
    scanf("%d", &range);
    for (i = 1; i <= range; i++)
    {
        result = num * i;
        printf("%d*%d=%d\n", num, i, result);
    }
    return 0;
}