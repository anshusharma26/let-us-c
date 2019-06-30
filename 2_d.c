#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int x,y;
float r, theta;
printf("Enter the value of co-ordinate:\n");
scanf("%d%d",&x,&y);
r=sqrt((x*x)+(y*y));
theta=pow(tan(y/x),-1);
printf("The value in polar co-ordinate:%f,%f",r,theta);
return 0;
}
