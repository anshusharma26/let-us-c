#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c;
system("clear");
printf("Enter the sides:\n");
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c)

 printf("Triangle is equilateral.");

else if(a==b || a==c || b==c)
     
      printf("Isosceles triangle.");
     
     else
     
      printf("Scalene triangle.");
     
}
