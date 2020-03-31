#include <stdio.h> 
#include<conio.h> 
 void main()  
{  
    char status,C,O;
	float balance;   
	
printf("enter the balance");    
scanf("%f",&balance);      
	if(balance==0)
	{
		status=C;
		printf("%c",status);	
	}
	else
	{
		status=O;
		printf("%c",status);
	}
    getch();
    }
