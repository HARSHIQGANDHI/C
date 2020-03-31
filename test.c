#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n,x,i;
	printf("Enter the no. of terms");
	scanf("%d",&n);
	a=n-1;
	b=a;
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=1;1<=b;i++)
	{
		b=b*i;
		for(n>=0;n++;)
		printf((-1*x**a)/b);
	}
	getch();
}	
