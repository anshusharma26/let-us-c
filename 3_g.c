#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c;
system("clear");
printf("Enter the angles of the triangle:\n");
scanf("%d %d %d",&a,&b,&c);
if(a+b+c==180)
{printf("It is a valid triangle.");
}
else{printf("It is not a valid triangle.");
}
}
