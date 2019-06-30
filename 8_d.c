#include<stdio.h>
#include<stdlib.h>
void find(int);
void main()
{
int yr;
printf("Enter a year:");
scanf("%d",&yr);
find(yr);
}
void find(int year)
{
if(year % 4)
printf("%d is not a leap year.\n",year);
else
printf("%d is a leap year.\n",year);
}
