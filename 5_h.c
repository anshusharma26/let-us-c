#include<stdio.h>
#include<stdlib.h>
void main()
{
long int i,n,arr[50];
system("clear");
printf("Enter any number to convert into octal:");
scanf("%ld",&n);
for(i=0;n>8;i++)
{
 arr[i]=n%8;
 n=n/8;
}
printf("octal conversion:%ld",n);
while(i>0)
{
printf("%ld",arr[i-1]);
i--;
}
}
