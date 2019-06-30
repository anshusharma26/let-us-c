#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,n,n1,res=1;
system("clear");
printf("Enter any two numbers:\n");
scanf("%d %d",&n,&n1);
a=n;
b=n1;
while(n1>0)
{
res=res*n;
n1--;
}
printf("%d raised to the power %d is %d",a,b,res);
}
