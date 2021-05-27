/*
# include<stdio.h>
# include<stdlib.h>
void main()
{
 char * p = NULL ;
 p = (char*)malloc(sizeof(char));
 printf("%ld",sizeof(p));
}
*/
// array usinng dynamic memory allocation
/*
# include<stdio.h>
# include<stdlib.h>
void main()
{
 int ele,*p = NULL;
 printf("Enter total number of elements\n");
 scanf("%d",&ele);
  p = (int*)malloc(ele*sizeof(int));
 for(int i = 0;i<ele;i++)
 {
  
   scanf("%d",(p+i));
  }
  for(int i=0;i<ele;i++)
  {
   printf("%d",*(p+i));
  }
 }
  */
  
   //2D array using synamic memory allocation
 
 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
  int row,column;
  int**p =NULL;
  printf("Enter total number of rows\n");
  scanf("%d",&row);
  scanf("%d",&column);
 p =(int**)malloc(row*sizeof(int*));
 for(int i = 0; i<row; i++)
 {
  *(p+i) = (int*)malloc(column*sizeof(int));
 }
 for(int i =0; i<row; i++)
 {
   for(int j =0;j<column;j++)
    {
     scanf("%d",*(p+i)+j);
    }
 }
for(int i = 0; i<row ;i++)
 {
   for(int j=0; j<column; j++)
    {
     printf("%d\t",*(*(p+i)+j));
    }
   printf("\n");
  }
}
   
  
  

  
  
