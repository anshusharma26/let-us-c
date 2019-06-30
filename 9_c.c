#include<stdio.h>
#include<math.h>
int main()
{
int n,i;
float deg,x,term,sum;
printf("enter the value of n:\n");
scanf("%d",&n);
printf("enter degrees:\n");
scanf("%f",&deg);
x=deg * 3.14/180;
term=x;
sum=term;
for(i=3;i<=n;i+=2)
{
term= -term*x*x/(i*(i-1));
sum=sum+term;
}
printf("sine(%f)=%f",deg,sum);
}
