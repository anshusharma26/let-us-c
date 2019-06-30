#include<stdio.h>
#include<stdlib.h>
void main()
{
int p=100000;
for(int i=0;i<10;i++)
{
 p=(p/100)*10;
 printf("Year %d : %d\n",10-i,p);
}
}
