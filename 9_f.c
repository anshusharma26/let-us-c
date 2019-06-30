#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float dis(int,int,int,int);
float ar(int,int,int,int,int,int);
void main()
{
int x,y,x1,y1,x2,y2,x3,y3;
float a,a1,a2,a3;
system("clear");
printf("Enter 1st point:\n");
scanf("%d%d",&x1,&y1);
printf("Enter 2nd point:\n");
scanf("%d%d",&x2,&y2);
printf("Enter 3rd point:\n");
scanf("%d%d",&x3,&y3);
printf("Enter point to check:\n");
scanf("%d%d",&x,&y);
a1=ar(x1,y1,x2,y2,x,y);
printf("A1=%f",a1);
a2=ar(x1,y1,x3,y3,x,y);
printf("A2=%f",a2);
a3=ar(x,y,x2,y2,x3,y3);
printf("A3=%f",a3);
a=ar(x1,y1,x2,y2,x3,y3);
printf("A=%f",a);
if(a1+a2+a3>a || a1+a2+a3<a)
printf("Point lies inside.\n");
else
printf("point lies outside.\n");
}
float dis(int x1,int y1,int x2,int y2)
{
float dist;
dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
return(dist);
}
float ar(int x1,int y1,int x2,int y2,int x3,int y3)
{
float a,b,c,area,s;
a=dis(x1,y1,x2,y2);
b=dis(x1,y1,x3,y3);
c=dis(x2,y2,x3,y3);
s=(a+b+c)/3;
area=sqrt(s*(s-a)*(s-b)*(s-c));
return(area);
}
