#include<stdio.h>
void main()
{
int n,i,temp;
printf("Enter size of array:\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
