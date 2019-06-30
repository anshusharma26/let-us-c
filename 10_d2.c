#include<stdio.h>
int bin(int);
void main()
{
int n;
printf("Enter number:\n");
scanf("%d",&n);
bin(n);
}
int bin(int n)
{
if(n>1)
{
bin(n/2);
}
printf("%d\n",n%2);
}
