#include<stdio.h>
void main()
{
int a[4][4],t[4][4];
int i,j;
printf("Enter elements of A:\n");
for(i=0;i<4;i++)
for(j=0;j<4;j++)
scanf("%d",&a[4][4]);
for(i=0;i<4;i++)
for(j=0;j<4;j++)
t[4][4]=a[4][4];
printf("Transpose of matrix:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
printf("%d\t",t[i][j]);
printf("\n");
}
}
