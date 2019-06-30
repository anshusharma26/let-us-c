#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c,d,e,f,res,n=1;
system("clear");
printf("Armstrong numbers.");
while(n<=500)
{
a=n%10;
b=n/10;
c=b%10;
d=b/10;
e=d%10;
f=d/10;
if(n==(a*a*a)+(c*c*c)+(e*e*e))
{
 printf("%d",n);
}
n++;
}
}
