#include<stdio.h>
#include<stdlib.h>
void main()
{
int x,y,n=21;
system("clear");
printf("The total number of matchsticks is 21.");
while(n>1)
{
 printf("Enter choice:");
 scanf("%d",&x);
 if ((1<=x) && (x<=4))
 {
  n=n-x;
  printf("The user chose %d,the matchsticks left %d",x,n);
 }
 else
 {
  printf("Invalid.");
  break;
 }
 y=5-x;
 n=n-y;
 printf("The computer chose %d, the matchsticks left %d",y,n);
}
if (n==1)
{
 printf("Last matchstick left, you lose");
}
}
