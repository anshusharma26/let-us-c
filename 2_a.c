#include<stdio.h>
#include<stdlib.h>
int main()
{
int sum,rem,no;
printf("Enter a five digit number:");
scanf("%d",&no);
sum=0,rem=0;
if(no==0)
printf("%d",no);
while(no!=0)
{
rem=no%10;
sum=sum+rem;
no=no/10;
}
printf("Sum is %d",sum);
}











