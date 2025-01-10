#include<stdio.h>
int main()
{
   char str[100],str2[100];
   printf("Enter the string\n");
   gets(str);
   printf("Enter the string\n");
   gets(str2);
   printf("The strings are %s and %s",str,str2);
   strcat(str,str2);
   printf("\nConcatenated string is %s",str);
   int len=strlen(str);
   printf("\nLength of the string is %d",len); 
    
    return 0;
}