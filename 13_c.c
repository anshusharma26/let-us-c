#include<stdio.h>
void main()
{
int ar[25],a,i,count=0;
for(i=0;i<25;i++)
{
printf("Enter number:\n");
scanf("%d",&ar[i]);
}
printf("Choose any number:\n");
scanf("%d",&a);
for(i=0;i<25;i++)
{
if(ar[i]==a)
count++;
}
if(count)
printf("It is present in data.");
else
printf("It is not present in data.");
}
