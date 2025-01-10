#include<stdio.h>
int main()
{
    FILE *f1;
    f1 = fopen("hello.txt", "w");
    fprintf(f1, "Hello, World!");
    fclose(f1);
    f1 = fopen("hello.txt", "r");
    char ch;
    if (f1 == 0)
    {
        printf("File not found");
    }
    else
    {
        ch = fgetc(f1);
        printf("%c", ch);
    }
    
    return 0;
}