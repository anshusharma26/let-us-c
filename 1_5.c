#include<stdio.h>
#include<stdlib.h>
int main()
{
int l,b,r;
float ar_rec,per,cir,ar_cir;
system("clear");
printf("enter the value of length and breadth:\n");
scanf("%d%d",&l,&b);
ar_rec=l*b;
printf("area of rectangle:%f\n",ar_rec);
per=2*(l+b);
printf("perimeter of rectangle:%f\n",per);
printf("enter value of radius:");
scanf("%d",&r);
ar_cir=3.14*r*r;
printf("area of circle=%f\n",ar_cir);
cir=2*3.14*r;
printf("circumference=%f\n",cir);
return 0;
}
