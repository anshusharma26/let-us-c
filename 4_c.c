#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c;
system("clear");
printf("Enter the sides:\n");
scanf("%d %d %d",&a,&b,&c);
if((a+b)>c)
{
 if((b+c)+a)
 {
  if((a+c)>b)
  {
   printf("Triangle is valid.");
  }
  else
  {
   printf("Not valid.");
  }}
 else
 {
  printf("Not valid.");
 }}
else
{
 printf("Not valid.");
}
}
