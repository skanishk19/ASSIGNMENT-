#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("Grade A");
    }
    else if(marks>=75 && marks<90)
    {
        printf("Grade B");
    }
    else if(marks>=50 && marks<75)
    {
        printf("Grade C");
    }
    else if(marks>=50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}