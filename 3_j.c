#include<stdio.h>
#include<stdlib.h>
void main()
{
int x,y,x1,y1,x2,y2,s1,s2;
system("clear");
printf("Enter the 1st point:\n");
scanf("%d %d",&x ,&y);
printf("Enter the 2nd point:\n");
scanf("%d %d",&x1 ,&y1);
printf("Enter the 3rd point:\n");
scanf("%d %d",&x2 ,&y2);
s1=(y1-y)/(x1-x);
s2=(y2-y1)/(x2-x1);
if(s1==s2)
{printf("Points fall on same line");
}
else{printf("Points does not fall on the same line");
}
}
