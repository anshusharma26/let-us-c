#include<stdio.h>
#include<stdlib.h>
int power(int,int);
void main()
{
int a,b,ans;
system("clear");
printf("Enter base and power:\n");
scanf("%d %d",&a,&b);
ans=power(a,b);
printf("%d raised to power %d=%d\n",a,b,ans);
}
int power(int x,int y)
{
int n=1,i;
for(i=1;i<=y;i++)
n=n*x;
return(n);
}
