#include<stdio.h>
#include<stdlib.h>
int main()
{
float temp;
float c;
system("clear");
printf("enter temperature:");
scanf("%f",&temp);
c=(temp-32)*0.56;
printf("temperature in centigrade:%f\n",c);
return 0;
}
