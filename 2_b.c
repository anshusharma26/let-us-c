#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,rev=0;
system("clear");
printf("Enter a five digit number:");
scanf("%d",&n);
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("Reverse of the number is:%d\n",rev);
return 0;
}
