#include<stdio.h>
void main()
{
int ar[25],i,p=0,n=0,z=0;
for(i=0;i<25;i++)
{
printf("Enter number:\n");
scanf("%d",&ar[i]);
}
for(i=0;i<25;i++)
{
if(ar[i]>0)
p++;
if(ar[i]<0)
n++;
if(ar[i]==0)
z++;
}
printf("%d positive values.\n",p);
printf("%d negative values.\n",n);
printf("%d zeroes.\n",z);
}
