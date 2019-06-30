void nrec_bin(int);
#include<stdio.h>
void main()
{
int n;
printf("Enter number:\n");
scanf("%d",&n);
nrec_bin(n);
}
void nrec_bin(int n)
{
int s=0;
for (;n;n/=2)
{
s+=n%2;
s*=10;
}
printf("%d\n",s);
}
