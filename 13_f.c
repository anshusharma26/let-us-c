#include<stdio.h>
void main()
{
int ar[25],i,min;
int *ptr;
ptr=&ar[0];
printf("Enter 25 numbers:\n");
for(i=0;i<25;i++)
{
scanf("%d",&ar[i]);
ptr++;
}
ptr=&ar[0];
min=ar[0];
for(i=0;i<25;i++)
{
if(*ptr<min)
min=*ptr;
ptr++;
}
printf("Smallest element:%d\n",min);
}
