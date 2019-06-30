#include<stdio.h>
#include<stdlib.h>
void cal(int,int,int,float*,float*);
void main()
{
float avg,pr;
int a,b,c;
printf("Enter the marks of the student in three subjects:\n");
scanf("%d%d%d",&a,&b,&c);
cal(a,b,c,&avg,&pr);
printf("Average marks:%f\n",avg);
printf("Percentage:%f\n",pr);
}
void cal(int a, int b, int c, float *avg, float *pr)
{
*avg=(a+b+c)/3;
*pr=*avg/3;
}
