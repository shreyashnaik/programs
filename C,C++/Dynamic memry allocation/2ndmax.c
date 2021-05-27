# include<stdio.h>
# include<stdlib.h>
void main()
{
 int *p,length,max=0,temp,max2;
 printf("enter the total elements in the array\n");
 scanf("%d",&length);
 p = (int*)malloc(length*sizeof(int));
 for(int i=0;i<length;i++)
 {
  scanf("%d",p+i);
 }
 max = *(p+0);
 max2 =*(p+1); 
 for(int i=1;i<length;i++)
 {
  if(*(p+i)>max)
   {
    max = *(p+i);
    for(int j=i-1;j>=0;j--)
     {
       if(*(p+j)>max2)
       {
        max2 = *(p+j);
        break;
       }
   }
  }
  else
       
       if(*(p+i)>max2)
        {
          max2 = *(p+i);
          }
          
 }
  printf("The second maximum number in array = %d\t",max2);
  }
     
 
  
