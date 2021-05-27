#include<stdio.h>
#include<stdlib.h>
void main()
{
 int *p,length;
 printf("enter the total elements in array\n");
 scanf("%d",&length);
 p =(int*)malloc(length*sizeof(int));
 for(int i=0;i<length;i++)
 {
  scanf("%d",p+i);
 }
 printf("even no on odd position are\n");
 for(int i=0;i<length;i++)
  { 
    
    if(i%2!=0)
     {
       if(*(p+i)%2==0)
        {
         printf("position=%d\nnumber=%d",i,*(p+i));
        }
      }
   }
  }
   
