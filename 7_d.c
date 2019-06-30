#include<stdio.h>
#include<stdlib.h>
void main()
{
int class,f_sub;
system("clear");
printf("Enter the class obtained:\n");
scanf("%d",&class);
printf("Enter the number of subjects failed:\n");
scanf("%d",&f_sub);
switch(class)
{
case 1: if(f_sub<=3)
	printf("Grace marks = 5 marks per subject.\n");
	else
	printf("No grace marks.\n");
	break;
case 2: if(f_sub<=2)
	printf("Grace marks = 4 marks per subject.\n");
	else
	printf("No grace marks.");
	break;
case 3: if(f_sub==1)
	printf("Grace marks = 5 marks per subject.\n");
	else
	printf("No grace marks.\n");
	break;
case 4: printf("Default");
	break;
}
}
