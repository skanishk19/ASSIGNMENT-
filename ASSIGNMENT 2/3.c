#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("\nEnter the value of n1");
	scanf("%d",&a);
	printf("\nEnter the value of n2");
	scanf("%d",&b);
	printf("Arithmetic operations");
	ans =a+b;
	printf("\nAddition of n1+n2=%d",ans);
	ans = a-b;
	printf("\nSubtraction of n1-n2=%d",ans);
	ans = a*b;
	printf("\nMultiplication of n1*n2=%d",ans);
	ans = a%b;
	printf("\ndivision of a%b=%d",ans);
	printf("\nRelational operators");
	printf("\nEqual to relational operator = ");
	a==b?printf("true"):printf("false");
	printf("\nNot equal to relational operator=");
	(a!=b)?printf("true"):printf("False");
	printf("\nless than equal to=");
	(a<=b)?printf("true"):printf("false");
	printf("\nmore than equal to=");
	(a>=b)?printf("true"):printf("false");
	printf("\nlogical operators");
	printf("\n logical && operator");
	(a>0 && b>0)?printf("true"):printf("false");
	printf("\n logical || operator");
	(a>0 || b>0)?printf("true"):printf("false");
	printf("\n logical ! operator");
	!(a>0)?printf("true"):printf("false");
	
	 return 0;
	}
