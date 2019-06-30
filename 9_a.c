#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void cal(int,int,int,int,int,int*,int*,float*);
void main()
{
int a,b,c,d,e,s,avg;
float sd;
system("clear");
printf("Enter five numbers:\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
cal(a,b,c,d,e,&s,&avg,&sd);
printf("Sum=%d\n",s);
printf("Average=%d\n",avg);
printf("Standard deviation:%f",sd);
}
void cal(int a,int b,int c,int d,int e,int *s,int *avg,float *sd)
{
int i;
*s=a+b+c+d+e;
*avg=*s/5;
*sd=pow(a-*avg,2)+pow(b-*avg,2)+pow(c-*avg,2)+pow(d-*avg,2)+pow(e-*avg,2);
*sd=sqrt(*sd/5);}
