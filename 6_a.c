#include<stdio.h>
#include<stdlib.h>
void main()
{
int p,i,n=300;
system("clear");
for(p=1;p<=300;p++)
{
i=2;
while(i<n-1)
{
if(p%i==0)
break;
i++;
}
if(i==p)
printf("%d\n",p);
}
}
