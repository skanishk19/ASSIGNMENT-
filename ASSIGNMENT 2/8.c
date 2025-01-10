#include <stdio.h>
int main()
{
    // One Dimentional Array
    int a[100], i, j, raw, column;
    int b[100][100], c[100][100], result[100][100];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]:", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nThe value of a[%d] is %d", i, a[i]);
    }
    printf("\n\n");
    printf("Enter the size of row and column:");
    scanf("%d %d", &raw, &column);
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the value of b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("\nthe value of b[%d][%d] is %d", i, j, b[i][j]);
        }
    }
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the value of c[%d][%d]:", i, j);
            scanf("%d", &c[i][j]);
        }
    }
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("the value of c[%d][%d] is %d", i, j, c[i][j]);
        }
    }
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            result[i][j] = b[i][j] + c[i][j];
        }
    }
    for (i = 0; i < raw; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("the value of result[%d][%d] is %d", i, j, result[i][j]);
        }
    }

    return 0;
}
