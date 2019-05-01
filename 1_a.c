#include<stdio.h>
#include<stdlib.h>
int main()
{
int x;
float sa;
system("clear");
printf("enter the total salary:");
scanf("%d",&x);
sa=x-(0.60*x);
printf("%f\n",sa);
return 0;
}
