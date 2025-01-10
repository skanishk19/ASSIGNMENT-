#include <stdio.h>
int main()
{
    int num[10], max, min, i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value of num[%d]:", i);
        scanf("%d", &num[i]);   
    }

    max = num[0];
    for (i = 0; i < 10; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    min = num[0];
    for (i = 0; i < 10; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}