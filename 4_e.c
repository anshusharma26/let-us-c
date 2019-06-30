#include<stdio.h>
#include<stdlib.h>
void main()
{
float r,g,b,c,m,y,k,w=0;
system("clear");
printf("Enter the color values of R, G and B:\n");
scanf("%f %f %f",&r,&b,&y);
r/=255;
g/=255;
b/=255;
if(w<r)
{
 w=r;
}
else if(w<g)
     {
      w=g;
     }
     else if(w<b);
          {
           w=b;
          }
          
c=(w-r)/w;
m=(w-g)/w;
y=(w-b)/w;
k=1-w;
printf("\n C:%f \n M:%f \n Y:%f \n K:%f",c,m,y,k);
}
