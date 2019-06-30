#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float ar(float,float,float);
void main()
{
float area,a,b,c;
system("clear");
printf("Enter the sides of triangle:\n");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c && b+c>a && a+c>b)
{
area = ar(a,b,c);
printf("Area of triangle:%f\n",area);
}
else
printf("Invalid.");
}
float ar(float a,float b,float c)
{
float area;
float S=(a+b+c)/2;
area=sqrt(S*(S-a)*(S-b)*(S-c));
return (area);
}
