int fun(int n);
#include<stdio.h>
void main()
{
int num;
printf("Enter number:\n");
scanf("%d",&num);
fun(num);
}
int fun(int n)
{
int i;
for(i=2;i<=n;i++)
{
if (n%i==0)
{
printf("%d\n",i);
fun(n/i);
break;
}
}
}
