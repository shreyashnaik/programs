#include<stdio.h>
#include<stdlib.h>
void main()
{
 int *p,*q,*r,len1,len2,len3,j=0;
 printf("enter the total elements in array 1\n");
 scanf("%d",&len1);
 p = (int*)malloc(len1*sizeof(int));
 for(int i=0;i<len1;i++)
  {
    scanf("%d",p+i);
  }
  printf("enter the total elemrnts in array2\n");
  scanf("%d",&len2);
  q = (int*)malloc(len2*sizeof(int));
  for(int i=0;i<len2;i++)
  {
   scanf("%d",q+i);
  }
  len3 = len1 + len2;
  printf("%d\n",len3);
  r = (int*)malloc(len3*sizeof(int));
  for(int i=0;i<len1;i++)
  {
    *(r+i) = *(p+i);
  }
  for(int i= len1;i<len3;i++)
  { 
    *(r+i) = *(q+j);
    j++;
  }
  for(int i=0;i<len3;i++)
  {
   printf("%d\t",*(r+i));
   }
  }
   
