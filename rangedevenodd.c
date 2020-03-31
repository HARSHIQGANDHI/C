#include <stdio.h> 
#include<conio.h> 
 void main()  
{  
    int a,b,n;    
printf("enter the upper limit");    
scanf("%d",&a);   
printf("enter the lower limit");    
scanf("%d",&b);      
printf("enter a number");    
scanf("%d",&n);     
	if(n%2==0 && n<a && n>b)
{    
		printf("the number is even");    
}    
	else if (n%2!=0 && n<a && n>b)
{    
		printf("the number is odd"); 
}     
	else if (n>a || n<b)
{    
		printf("invalid range"); 
}     
    getch();
    }
