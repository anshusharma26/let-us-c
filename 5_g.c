#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,p=0,z=0,n=0;
char ch;
system("clear");
do
{
printf("Enter the number:");
scanf("%d",&i);
if(i>0)
{
 p++;
}
else if(i<0)
{
 n++;
}
else
{
 z++;
}
printf("Do you want to continue(y/n)?\n");
scanf("%c", &ch);
}
while(ch == 'y' || ch == 'Y');
{
printf("You entered %d zeroes.\n",z);
printf("Positive numbers %d zeroes\n",p);
printf("Negative numbers %d zeroes\n",n);
}
}
