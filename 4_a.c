#include<stdio.h>
#include<stdlib.h>
void main()
{
int y;
system("clear");
printf("Enter value of y:\n");
scanf("%d",&y);
if(y%4==0 || y%100==0 || y%400==0)
printf("Year %d is leap year.",y);

else
printf("%d is not leap year.",y);

}
