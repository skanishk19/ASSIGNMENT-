#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);    
    int *ptr = &i;
    printf("Address of i: %d\n",i);
    printf("Value of i: %d\n", *ptr);  
    printf("Address of ptr: %p\n",ptr);
  
    return 0;
}