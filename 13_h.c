#include<stdio.h>
void main()
{
int ar[10],n,i,temp,j;
printf("Enter number:\n");
scanf("%d",&n);
printf("Enter elements of array:\n");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("The elements of array:\n");
for(i=0;i<n;i++)
printf("%d\n",ar[i]);
for(j=0;j<n-1;j++)
{
for(i=0;i<n-1-j;i++)
{
if(ar[i]>ar[i+1])
{
temp=ar[i];
ar[i]=ar[i+1];
ar[i+1]=temp;
}
}
}
printf("The sorted elements are:\n");
for(i=0;i<n;i++)
printf("%5d",ar[i]);
}
