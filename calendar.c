#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;


printf("\n enter the month number:");
scanf("%d",&a);
switch(a)
	{
	case 1: printf("January");break;
	case 2: printf("Febuary");break;
	case 3: printf("March");break;
	case 4: printf("April");break;
	case 5: printf("May");break;
	case 6: printf("June");break;
	case 7: printf("July");break;
	case 8: printf("August");break;
	case 9: printf("September");break;
	case 10: printf("October");break;
	case 11: printf("November");break;
	case 12: printf("December");break;
	default:printf("NA");
	}
printf("\n enter the day:");
scanf("%d",&b);
	if(3<b<21 || 23<b<31) 
	{
		printf("%dth",b);
	}	
	else if(b==1 || b==21 || b==31) 
	{
		printf("%dst",b);
	}
	else if(b==2 || b==22) 
	{
		printf("%dnd",b);
	}
	else if(b==3 || b==23) 
	{
		printf("%drd",b);
	}
	else if(a>31) 
	{
		printf("NA");
	}
	printf("\n enter the year:");
	scanf("%d",&c);
	{
		printf("%d",c);
	}
getch();
}
