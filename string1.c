#include<stdio.h>
#define MAX 20
int main()
{
	int i,c,s;
	char str[MAX];
	printf("\n Enter number:");
	scanf("%s",str);
	printf("The string you entered is: %s");
	while (s[i]!= '\0') 
	{
    	if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
      	{
      		c++;
    		i++;
		}
  	}
  printf("Number of vowels in the string: %d", c);
	return(0);
} 
