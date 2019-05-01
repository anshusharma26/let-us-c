#include<stdio.h>
#include<stdlib.h>
int main()
{
int d;
float m,ft,inch,cm;
printf("distance in kilometers:");
scanf("%d",&d);
m=d*1000;
printf("distance in meters:%f\n",m);
ft=d*3280.84;
printf("distance in feet:%f\n",ft);
inch=d*39370.1;
printf("distance in inches:%f\n",inch);
cm=d*100000;
printf("distance in centimeters:%f\n",cm);
return 0;
}
