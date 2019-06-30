#include<stdio.h>
#include<stdlib.h>
void main()
{
float i,x,y;
system("clear");
printf("Values of i,y,x:");
for(y=1;y<=6;y++)
{
 for(x=5.5;x<=12.5;x=x+0.5)
 {
  i=2+(y+(0.5*x));
  printf("%f,%f,%f",i,y,x);
 }
}
}
