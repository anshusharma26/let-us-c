#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,n,num=1,k;
system("clear");
printf("enter the number of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=n-1;j>=i;j--)
{
printf("  ");
}
 for(k=1;k<=i;k++)
 {
  printf("%d",num);
 printf("  ");
  num++; 
}
printf(" \n ");
}
}

