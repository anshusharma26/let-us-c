#include<stdio.h>
void main()
{
int ar[5]={10,20,30,40,50},ar1[10],i;
for(i=4;i>=0;i--)
ar1[i]=ar[4-i];
for(i=0;i<5;i++)
printf("%d\n",ar1[i]);
}
