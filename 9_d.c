#include<stdio.h>
#include<stdlib.h>
int chng(int*,int*,int*);
void main()
{
int a,b,c;
system("clear");
printf("Enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
printf("You entered:\na:%d\nb:%d\nc:%d\n",a,b,c);
chng(&a,&b,&c);
printf("After shifting:\na:%d\nb:%d\nc:%d\n",a,b,c);
}
int chng(int*a,int*b,int*c)
{
int x;
x=*c;
*c=*b;
*b=*a;
*a=x;
}
