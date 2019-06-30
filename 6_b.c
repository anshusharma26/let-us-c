#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,res,s,fact=1;
system("clear");
for(n=1;n<=7;n++)
{
fact=fact*n;
res=n/fact;
s=s+res;
}
printf("Sum of serise:%d",s);
}
