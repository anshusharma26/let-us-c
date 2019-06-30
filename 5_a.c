#include<stdio.h>
#include<stdlib.h>
void main()
{
int emp,ot,op,hr;
system("clear");
for (emp=1;emp<=10;emp++)
{
printf("Enter number of hours worked by %d employee:\n",emp);
scanf("%d",&hr);
if(hr>40)
{
 ot=hr-40;
 op=ot*12;
 printf("The overtime pay of employees is %d.",op);
}
else if (hr<40)
     {
      printf("There is no overtime pay for employee.");
}
}
}
