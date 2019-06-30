#include<stdio.h>
#include<math.h>
void main()
{
float x[10],y[10],dis=0;
int i,j;
printf("Enter the co-ordinates of 10 points:\n");
for(i=0;i<10;i++)
scanf("%f%f",&x[i],&y[i]);
for(i=0;i<10;i++)
dis=dis+sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
printf("Total distance is %f",dis);
}
