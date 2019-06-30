#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,k;
system("clear");
for(i=1;i<=30;i++)
{
 for(j=i;j<=30;j++)
 {
  for(k=j;k<=30;k++)
  {
   if(i*i + j*j == k*k || j*j + k*k == i*i || i*i + k*k == j*j)
    printf("%d, %d and %d\n",i,j,k);
  }
 }
}
}
