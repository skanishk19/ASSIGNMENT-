#include <stdio.h>
int fact(int num)
{
    int i,f = 1;
    for(i=1; i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num,result;
    printf("\nEnter the value of num1");
    scanf("%d",&num); 

    result=fact(num);
    printf("\n %d factorial no is %d",num,result);
    return 0;
}