#include <stdio.h>
int main()
{
    int a[100], sum, avg, size, i;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    avg = (float)sum / (float)size;
    printf("sum=%d\n", sum);
    printf("average=%d\n", avg);
    return 0;
}