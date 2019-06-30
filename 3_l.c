#include<stdio.h>
#include<stdlib.h>
void main()
{
int x,y;
system("clear");
printf("Enter value of x and y:\n");
scanf("%d%d",&x,&y);
if(x==0&&y==0)
 {printf("Point is on origin.");
 }
else{if(x==0&&y!=0)
      {printf("Point is on y-axis.");
      }
      else{if(x!=0&&y==0)
            {printf("Point is on x-axis.");
            }
            else{printf("Point is not on any axis.");
	        }
          }
    }
}
