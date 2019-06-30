#include<stdio.h>
void main()
{
int i,j,a[3][3];
long det;
printf("Enter elements of A:\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("The matrix is:\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d",a[i][j]);
}
det=a[0][0]*((a[1][1]*a[2][2])-(a[2][1])*(a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0])*(a[1][2]))+a[0][2]*((a[1][0]*a[2][1])-(a[2][0])*(a[1][1]));
printf("Determinant:%ld",det);
}
