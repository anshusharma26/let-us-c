#include<stdio.h>
#include<stdlib.h>
void main()
{
int h,ts,gr;
float c;
system("clear");
printf("Enter value of hardness,tensile strength and carbon content in the steel:\n");
scanf("%d %d %f",&h,&ts,&c);
if((h>50) && (c<0.7) && (ts>5600))
{
 printf("Grade 10");
}
else if((h>50) && (c>0.7))
     {
      printf("Grade 9");
     }
     else if((c<0.7) && (ts>5600))
          {
           printf("Grade 8");
          }
          else if((h>50) && (ts>5600))
               {
                printf("Grade 7");
               }
               else if((h>50) || (c>0.7) || (ts>5600))
                    {
                     printf("Grade 6");
                    }
                    else
                        {
                         printf("Grade 5");
                        }
}
