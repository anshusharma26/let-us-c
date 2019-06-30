#include<stdio.h>
void main()
{
int i,j,n,a[n][n];
printf("Enter row and column of A:\n");
scanf("%d",&n);
printf("Enter elements of A:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[n][n]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]=a[j][i])
printf("Asymmetric\n");
else
continue;
}
}
if(i==n)
printf("Symmetric\n");
}
