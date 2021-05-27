 # include<stdio.h>
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
     if(*(p+j)>*(p+(j+1)) && *(p+j)<100&& *(p+(j+1)))
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
