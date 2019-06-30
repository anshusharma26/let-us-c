#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;
system("clear");
printf("Enter any number:");
scanf("%d",&n);
if(n<0)
{
n=(-1)*n;
printf("Absolute value is %d",n);
}
}
