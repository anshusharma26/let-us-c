#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int i,n,sec;
float d,u,a;
system("clear");
printf("enter the number of intervals:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("interval:%d\n",i);
printf("enter the time in seconds:\n");
scanf("%d",&sec);
printf("enter the acceleration:\n");
scanf("%f",&a);
printf("enter the velocity:\n");
scanf("%f",&u);
d=d+(u*sec+(a*(pow(sec,2)))/2);
}
printf("total distance travelled is %.2f",d);
}
