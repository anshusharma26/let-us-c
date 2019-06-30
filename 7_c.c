#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,fact=1,ch,i;
system("clear");
printf("1:Factorial.\n");
printf("2:Prime or not.\n");
printf("3:Even or odd.\n");
printf("Enter any number:\n");
scanf("%d",&n);
printf("Enter any choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1: if(n<0)
	printf("ERROR\n");
	else
	{ for(i = 1 ;i <= n; ++i)
	   fact *= i;
	  printf("Factorial of number %d is %d\n",n,fact);
	}
	break;
case 2: for(i=2;i<=n/2;++i)
	if (n%i==0)
	printf("Not a prime number.\n");
	else
	printf("Prime number.\n");
	break;
case 3: if(n%2==0)
	printf("Even number.\n");
	else
	printf("Odd number.\n");
	break;
case 4: printf("Default.\n");
	break;
}
}
