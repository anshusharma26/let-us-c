#include<stdio.h>
#include<stdlib.h>
void main()
{
int max=0,min=0;
int temp,n,i;
system("clear");
printf("Length of number set:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=1;i<=n;i++)
{
scanf("%d",&temp);
if(temp>max)
max=temp;
if(i==1)
min=temp;
}
printf("Range of set is %d",max-min);
}
