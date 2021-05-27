#include<stdio.h>
#include<stdlib.h>
int main()
{int flag = 0;
 int row,column;
 int **p = NULL;
 printf("Enter the total number of rows\n");
 scanf("%d",&row);
 printf("Enter the total number of columns\n");
 scanf("%d",&column);
 printf("Enter the array elements\n");
 p = (int**)malloc(row*sizeof(int*));
 for(int i =0;i<row;i++)
 {
  *(p+i) = (int*)malloc(column*sizeof(int));
 }
 for(int i = 0;i<row;i++)
  {
   for(int j=0;j<column;j++)
   {
    scanf("%d",*(p+i)+j);
   }
  }
 printf("Your 2D array is\n");
 for(int i=0;i<row;i++)
  {
   for(int j=0;j<column;j++)
   {
    printf("%d\t",*(*(p+i)+j));
   }
   printf("\n");
  }
 
 for(int i=0;i<row;i++)
 {
  for(int j=0;j<column;j++)
   {
     if(i<j &&*(*(p+i)+j)!=0)
     {
       flag=1;
       break;
     }
    }
    if(flag==1)
    {
    break;
    }
  }
  if(flag ==0)
  {
   printf("ltm\n");
   }
   else
   printf("not ltm\n");
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
