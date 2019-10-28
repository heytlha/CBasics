#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,A[3][3];
 clrscr();
 for(i=0;i<3;i++)
   {
   for(j=0;j<3;j++)
   { printf("enter an element");
      scanf("%d",&A[i][j]);
     }
    }
  for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
      { printf("%d ",A[i][j]);
     }
     printf("\n");
   }
   getch();
  }