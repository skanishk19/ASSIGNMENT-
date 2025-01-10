#include<stdio.h>
#include<string.h>
void reversword(char c[])
{
    int i, len = 0, j = 0;
    char s[100];
    for (i = 0; c[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        s[j] = c[i];
        j++;
    }

    printf("Reverse String Is:\t");
    for (i = 0; s[i] != '\0'; i++)
    {
        printf("%c",s[i]);  
    }

} 
int main()
{
    char str[100];
    printf("Enter the string\n");    
    gets(str);  
    strev(str);
    printf("\nReversed string is %s", str);

    printf("\n\n");
    char s[100];
    printf("Enter the string\n");
    gets(s);
    reversword(s);
    return 0;
}