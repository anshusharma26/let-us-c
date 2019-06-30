#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,a=1,res;
system("clear");
printf("Enter any number:");
scanf("%d",&n);
while(a<=10)
{
res=a*n;
printf("%d*%d=%d\n",n,a,res);
a++;
}
}
