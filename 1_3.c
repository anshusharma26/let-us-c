#include<stdio.h>
#include<stdlib.h>
int main()
{
int m1,m2,m3,m4,m5,tm;
float agg,percent;
system("clear");
printf("enter total marks:");
scanf("%d",&tm);
printf("enter marks obtained:\n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
agg=(m1+m2+m3+m4+m5)/5;
printf("aggregate marks:%f\n",agg);
percent=((m1+m2+m3+m4+m5)/tm)*100;
printf("percentage:%f\n",percent);
return 0;
}
