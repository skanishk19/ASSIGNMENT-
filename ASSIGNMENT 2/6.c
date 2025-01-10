#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {

        if (i == 3)
        {
            continue;
        }
        printf("\n%d", i);
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}