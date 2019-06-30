#include <stdio.h>
#include <stdlib.h>
void main()
{
int m,n,i,j,A[10][10],B[10][10],S[10][10];
system("clear");
printf("Enter number of rows and columns:\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of A:\n");

for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d", &A[i][j]);

printf("Enter the elements of B:\n");

for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d", &B[i][j]);

printf("sum of matrix:\n\n");

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
S[i][j]=A[i][j]+B[i][j];
printf("%d  ",S[i][j]);
}
printf("\n\n");
}
}
