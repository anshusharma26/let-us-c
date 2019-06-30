#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b,c;
float s,area;
printf("Enter value of a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/3;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of triangle:%f",area);
return 0;
}
