#include<stdio.h>
int main()
{
char str[100];
int i,vowels=0,consonants=0,digits=0,spaces=0;
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a' && str[i]<='z')
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
{
vowels++;
}
else
{
consonants++;
}
}
else if(str[i]>='0' && str[i]<='9')
{
digits++;
}
else 
{
spaces++;
}
}
printf("Vowels=%d\n",vowels);
printf("Consonants=%d\n",consonants);
printf("Digits=%d\n",digits);
printf("Spaces=%d\n",spaces);
    return  0;
}