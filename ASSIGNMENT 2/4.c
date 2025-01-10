#include<stdio.h>
int main()
{
	int n1,ch;
	printf("Enter the value of n1");
	scanf("%d",&n1);
	if(n1%2==0)
	{ printf(" It is a even no");
	
}

else
{printf("It is odd no");
}

printf("\n\n");
printf("Enter a month no(1to12)");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		printf("january");
		break;
		case 2:
			printf("febuary");
			break;
			case 3 :
				printf("March");
				break;
				case 4 :
					printf("April");
					break;
					case 5 :
						printf("May");
						break;
						case 6:
		printf("Jun");
		break;
		case 7:
			printf("July");
			break;
			case 8 :
				printf("August");
				break;
				case 9 :
					printf("September");
					break;
					case 10 :
						printf("October");
						break;
						case 11 :
					printf("November");
					break;
					case 12 :
						printf("December");
						break;
						default :
							printf("Invalid Operations");
							break;
}
	return 0;
}
