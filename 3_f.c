#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,c;
system("clear");
printf("Enter the ages of Ram, Shyam and Ajay:\n");
scanf("%d %d %d",&a,&b,&c);
if(a<b&&a<c)
{printf("Ram is youngest.");
}
else if(b<c)
      {printf("Shyam is youngest.");
       }
else {printf("Ajay is youngest.");
      }
}
