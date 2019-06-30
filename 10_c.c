#include<stdio.h>
void fs(int first,int second,int term);
void main()
{
fs(0,1,25);
}
void fs(int fis,int sec,int term)
{
int n;
if(term==0)
return;
n=fis+sec;
fis=sec;
sec=n;
printf("%d",n);
fs(fis,sec,term-1);
}
