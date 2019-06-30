#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
float i,p,q,r,n,a,b;
system("clear");
for(i=1;i<=10;i++)
{
printf("Enter values of p,n,q and r:\n");
scanf("%f %f %f %f",&p,&n,&q,&r);
b=pow((1+r/q),n*q);
a=p*b;
printf("%f is the amount.",a);
}
}
