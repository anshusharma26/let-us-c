#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int a,i;
float s,act,term,x;
system("clear");
printf("Enter value of x:");
scanf("%f",&x);
a=2;
term=(x-1)/x;
s=term;
for(i=1;i<=6;i++)
{
act=pow(term,a)/2;
s=s+act;
a++;
}
printf("Sum of first seven terms of series:%f",s);
}
