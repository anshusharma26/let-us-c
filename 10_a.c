#include<stdio.h>
int nrec_calc(int);
int rec_calc(int);
void main()
{
int n,s;
printf("Enter 5-digit number:\n");
scanf("%d",&n);
s=nrec_calc(n);
printf("Sum of digits using non-recursive function:%d\n",s);
s=nrec_calc(n);
printf("Sum of digits using recursive function:%d\n",s);
}
int nrec_calc(int n)
{
int a,s=0,i;
for(i=0;n;i++)
{
a=n%10;
s=s+a;
n=n/10;
}
}
int rec_calc(int n)
{
int s=0;
if(n==0)
return s;
s=n%10+rec_calc(n/10);
return s;
}
