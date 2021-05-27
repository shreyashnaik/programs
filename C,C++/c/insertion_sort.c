# include<stdio.h>
void display(int arr[],int count)
{
 printf("[ ");
 for(int i=0;i<count;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("]\n");
}
void insertion_sort(int arr[],int count)
{
  int temp;int hole;
  for(int i=1;i<count;i++)
  { 

   hole = i;
   temp = arr[i];
   printf(" Temporary variable =>> %d\n",arr[i]);
   printf("compairing [%d,%d]\n",arr[hole-1],temp);
  
   while(hole > 0 && arr[hole-1] > temp)
   { 
 
   arr[ hole] = arr[hole-1];
    printf("moved [%d at index %d]\n",arr[hole-1] ,hole);
    hole--;
   
   }
   arr[hole] = temp;
   printf("moved [%d at index %d]\n",temp ,hole);
   
   printf("list after %d iteration(s) ==> ",i);
   display(arr,count);
   printf("*****************************************\n");
 }
}  
void main()
{
 int arr[10],count;
 printf("Enter total number of elements\n");
 scanf("%d",&count);
 printf("Enter elements\n");
 for(int i=0;i<count;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Unsorted list==>> \n");
 display(arr,count);
 insertion_sort(arr,count);
 printf("Sorted list is ==> ");
 display(arr,count);
}
