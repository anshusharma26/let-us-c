#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int cp,sp,g,l;
system("clear");
printf("Enter the cost price of the product:");
scanf("%d",&cp);
printf("Enter the selling price of the product:");
scanf("%d",&sp);
if(cp<sp)
{printf("He made profit.\n");
g=sp-cp;
printf("Profit=%d",g);
}
else{printf("He made loss.\n");
l=cp-sp;
printf("Loss=%d",l);
}
}
