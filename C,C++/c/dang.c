// dangling pointer

# include<stdio.h>
#include<stdlib.h>

 int main()
 {
 int *p = NULL;
 
 p = (int*)malloc(sizeof(int));
 *p = 10000;
 
   printf("%d",*p);
   free(p);
    printf("%d",*p);
  free(p);
  
 
 
 }
 
 
