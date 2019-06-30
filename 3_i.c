#include<stdio.h>
#include<stdlib.h>
void main()
{
int l,b,a,p;
system("clear");
printf("Enter the length and breadth of rectangle:\n");
scanf("%d %d",&l, &b);
p=2*(l+b);
a=l*b;
if(a>p)
{printf("Valid rectangle");
}
else{printf("Invalid");
}
}
