#include<stdio.h>
#include<stdlib.h>
void rom(int);
void print(int,char);
void main()
{
int yr;
system("clear");
printf("Enter the year:\n");
scanf("%d",&yr);
printf("Roman equivalent of %d=\n",yr);
rom(yr);
}
void rom(int yr)
{
int I,V,X,L,C,D,M;
M=yr/1000;
print(M,'M');
yr %= 1000;

D=yr/500;
print(D,'D');
yr %= 500;

C=yr/100;
print(C,'C');
yr %= 100;

L=yr/50;
print(L,'L');
yr %= 50;

X=yr/10;
print(X,'X');
yr %= 10;

V=yr/5;
print(V,'V');
yr %= 5;

print(yr,'I');
}
void print(int a,char c)
{
int i;
for(i=0;i<a;i++)
printf("%c",c);
}
