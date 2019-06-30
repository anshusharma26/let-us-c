#include<stdio.h>
#include<stdlib.h>
void main()
{
char ch;
system("clear");
printf("Enter any character:");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
{
 printf("Character is capital letter.");
}
else if(ch>=97 && ch<=122)
     {
      printf("Character is a small letter.");
     }
     else if(ch>=48 && ch<=57)
          {
           printf("Character is a digit.");
          }  
          else if((ch>0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=127))
               {
                printf("Character is a symbol.");
               }
}
