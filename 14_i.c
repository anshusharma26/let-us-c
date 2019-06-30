#include<stdio.h>
int main()
{
int i,j,m,n,p,q,k,s=0,A[10][10],B[10][10],M[10][10];

printf("Enter number of rows and columns:\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of A:\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);

printf("Enter number of rows and columns:\n");
scanf("%d%d",&p,&q);

if(n!=p)
printf("Invalid.\n");
else
{
printf("Enter the elements of B:\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&B[i][j]);

for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<p;k++)
{
s=s+(A[i][k]*B[k][j]);
}
M[i][j]=s;
s=0;
}
}
printf("Product of matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("%d  ",M[i][j]);
printf("\n\n");
}
}
}
