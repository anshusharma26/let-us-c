#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,fact=1;
system("clear");
printf("Enter the number:");
scanf("%d",&n);
while(n>0)
{
fact=fact*n;
n=n-1;
}
printf("Factorial value=%.3d",fact);
}
