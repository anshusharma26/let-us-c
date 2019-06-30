#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,rem,i,rev=0,n1,c=0;
system("clear");
printf("Enter a five digit number:\n");
scanf("%d",&n);
n1=n;
while(n>0)
{rem=n%10;
rev=rem+rev*10;
n=n/10;
c++;
}
if(c==5)
{if(n1==rev)
 {printf("The given number %d is palindrome",n1);
 }
else{printf("The given number %d is not palindrome",n1);
}}
else{printf("The given number %d is not five digit number",n1);
}
}
