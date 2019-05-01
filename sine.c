#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,i;
float degree,x,term,sum;
system("clear");
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter degrees:");
scanf("%f",&degree);
x=degree*3.14/180;
term=x;
sum=term;
for(i=3;i<=n;i+=2)
{
term=-term*x*x/(i*(i-1));
sum=sum+term;
}
printf("Sine(%f)=%f\n",degree,sum);
}
