#include<stdio.h>
#include<stdlib.h>
int done (int);
void main()
{
int n,fact;
system("clear");
printf("Enter any number:");
scanf("%d",&n);
fact=done(n);
printf("Factorial=%d\n",fact);
}
int done(int a)
{
int fac=1,i;
for(i=1;i<=a;i++)
fac=fac*i;
return(fac);
}
