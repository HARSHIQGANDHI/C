#include <stdio.h> 
#include<conio.h> 
 void main()  
{  
    int n,q,r;    
printf("enter the number");    
scanf("%d",&n);
   q=n/2;
   r=n%2;
   while(1)
   {
   		printf("%d",r);
   		q=q/2;
		r=q%2;  
   		if(q==0)
   		{
   			break;
		}
		
   }
   getch();
}
