#include <stdio.h>
int main()
{
    int num1[100][100], num2[100][100], num3[100][100], num4[100][100], result[100][100];
    int i, j, row, col, k;
    printf("Enter the size of row and column:");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the value of num1[%d][%d]:", i, j);
            scanf("%d", &num1[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the value of num2[%d][%d]:", i, j);
            scanf("%d", &num2[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            num1[i][j] = num1[i][j] + num2[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", num1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Enter the size of row and column:");
    scanf("%d %d", &row, &col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the value of num3[%d][%d]:", i, j);
            scanf("%d", &num3[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter the value of num4[%d][%d]:", i, j);
            scanf("%d", &num4[i][j]);
        }
    }
    printf("\n"); 
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                result[i][j] = result[i][j] + (num3[i][k] * num4[k][j]);
            }
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}