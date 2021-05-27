
// 2D array

/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int**p = NULL,i,length;
 p = (int**)malloc(3*sizeof(int*));
 for(int i=0;i<3;i++)
 {
  *(p+i) = (int*)malloc(3*sizeof(int));
 }
 for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     scanf("%d",*(p+i)+j);
     }
 }
  for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     printf("%d\t",*(*(p+i)+j));
     }
     printf("\n");
 }
 }
 */
 
 //1D array
 /*
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int*p = NULL,i,length;
 printf("enter no of elements");
 scanf("%d",&length);
 p = (int*)malloc(length*sizeof(int));
 for(int i=0;i<length;i++)
 {
   scanf("%d",p+i);
  }
 
 for(int i=0;i<length;i++)
 {
   printf("%d",*(p+i));
  }
  }
  */
  
  //value
 /*
 #include<stdio.h>
#include<stdlib.h>
void main()
{
 int*p = NULL;
 p = (int*)malloc(sizeof(int));
 *p = 10;
 printf("%d",*p);
 }
 */
 
 
/* 
 //transpose of matrix
 
 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
  int**p = NULL;
  int**q = NULL;
  p = (int**)malloc(3*sizeof(int*));
  for(int i=0;i<3;i++)
  {
   *(p+i) = (int*)malloc(3*sizeof(int));
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
     {
       scanf("%d",*(p+i)+j);
     }
  }
  for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
      {
        printf("%d\t",*(*(p+i)+j));
      }
      printf("\n");
   }
   q= (int**)malloc(3*sizeof(int*));
  for(int i=0;i<3;i++)
  {
   *(q+i) = (int*)malloc(3*sizeof(int));
  }
 
 for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
    {
      *(*(q+i)+j) = *(*(p+j)+i);
    }
  }
  printf("transpose of matrix is\n");
  for(int i=0;i<3;i++)
   {
     for(int j=0;j<3;j++)
      {
        printf("%d\t",*(*(q+i)+j));
      }
      printf("\n");
   }
   }
   
 */
 
 //print diaognal elements
 
    #include<stdio.h>
#include<stdlib.h>
void main()
{
 int**p = NULL,i,length;
 p = (int**)malloc(3*sizeof(int*));
 for(int i=0;i<3;i++)
 {
  *(p+i) = (int*)malloc(3*sizeof(int));
 }
 for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     scanf("%d",*(p+i)+j);
     }
 }
  for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     printf("%d\t",*(*(p+i)+j));
     }
     printf("\n");
 }
 
 printf("diagonal elements are\n");
  for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    { if(i==j)
      {
       printf("%d\t",*(*(p+i)+j));
      }
      else
      printf("\t");
     }
     printf("\n");
 }
 }
  
 
 /*
 //upper triangular matrix
 
 #include<stdio.h>
#include<stdlib.h>
void main()
{
 int**p = NULL,i,length,count = 0;
 p = (int**)malloc(3*sizeof(int*));
 for(int i=0;i<3;i++)
 {
  *(p+i) = (int*)malloc(3*sizeof(int));
 }
 for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     scanf("%d",*(p+i)+j);
     }
 }
  for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     printf("%d\t",*(*(p+i)+j));
     }
     printf("\n");
 }
 for(int i=0;i<3;i++)
 { 
   for(int j=0;j<3;j++)
    { 
      if(i>j && *(*(p+i)+j)==0)
      {
        count++;
      }
    }
  }if(count==3)
   {
     printf("utm");
    }else
    printf("not utm");
 }
  */
  
 // unit matrix
 /*
 
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int**p = NULL,i,count=0,count1=0,count2=0;
 p = (int**)malloc(3*sizeof(int*));
 for(int i=0;i<3;i++)
 {
  *(p+i) = (int*)malloc(3*sizeof(int));
 }
 for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
    {
     scanf("%d",*(p+i)+j);
     }
 }
  for(int i=0;i<3;i++)
 {
   for(int j=0;j<3;j++)
   {
     if(i == j  && *(*(p+i)+j) == 1)
     {
      count++;
     }
     if(i<j && *(*(p+i)+j) == 0)
     {
      count1++;
     }
     if(i>j && *(*(p+i)+j) == 0)
     {
      count2++;
     }
 }
 }
 if(count == count1 && count == count2)
 {
  printf("unit matrix");
 }else
 {
 printf("not unit matrix");
 }
 }
 
 */
 
 
 // no divisible by 5 and 7
 /*
 # include<stdio.h>
 # include<stdlib.h>
 void main()
 {
  int *p = NULL;
  p = (int*)malloc(5*sizeof(int));
  for(int i=0;i<5;i++)
  {
    scanf("%d",p+i);
  }
  /* for(int i=0;i<5;i++)
  {
    printf("%d",*(p+i));
  }
  */
 /*
 for(int i=0;i<5;i++)
  {
    if(*(p+i)%5==0 && *(p+i)%7==0)
     {
      printf("%d\n",*(p+i));
     }
  }
}
*/

//find the negative number
/*
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int*p = NULL,length;
 printf("enter the total number of elements\n");
 scanf("%d",&length);
 p = (int*)malloc(length*sizeof(int));
 for(int i=0;i<length;i++)
 {
   scanf("%d",p+i);
 }
 printf("negative numbers in array are");
 for(int i=0;i<length;i++)
 {
   if(*(p+i)<0)
   {
     printf("%d\t",*(p+i));
   }
  }
 }
 */
 
 //sort the array in decending order
/* # include<stdio.h>
 # include<stdlib.h>
void main()
{
 int *p = NULL,length,temp;
 printf("enter the total number of elements in array\n");
 scanf("%d",&length);
 p = (int*)malloc(length*sizeof(int));
 for(int i=0;i<length;i++)
 {
   scanf("%d",p+i);
 }
 printf("sorted array in desending order is\n");
 for(int i=0;i<length-1;i++)
 {
   for(int j=0;j<length-i-1;j++)
   {
     if(*(p+j)<*(p+(j+1)))
     {
      temp = *(p+(j+1));
      *(p+(j+1)) = *(p+j);
      *(p+j) = temp;
      }
    }
  }
  for(int i=0;i<length;i++)
  {
   printf("%d\t",*(p+i));
  }
  
 }
 */  
  
   
 
 
