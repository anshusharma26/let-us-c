#include<stdio.h>
#include<stdlib.h>
void main()
{
int h;
system("clear");
for(h=0;h<24;h++)
{
if(h==0)
printf("\n12 midnight");
if(h>0 && h<12)
printf("\n%d AM",h);
if(h == 12)
printf("\n%d Noon.",h);
if(h>12 && h<24)
printf("\n%d PM",h-12);
}
}
