#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int l1,l2,g1,g2,pi;
float d;
system("clear");
printf("Enter the latitudes:\n");
scanf("%d %d",&l1 &l2);
pi=3.14;
l1=l1*pi;
l2=l2*pi;
printf("Enter the longitudes:\n");
scanf("%d %d",&g1 &g2);
g1=g1*pi;
g2=g2*pi;
d=3963*cos^-1(sinl1*sinl2+cosl1*cosl2*cos(g1-g2));
printf("Distance between points:%f",d);
return 0;
}
