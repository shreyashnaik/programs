# include<stdio.h>
void display(int arr[],int count)
{
  printf("[ ");
 for(int i=0;i<count;i++)
 {
 
  printf("%d,",arr[i]);

}
  printf("]\n");
}

void bubblesort(int arr[],int count)
{
  int itr,i,swap,temp;
  for(itr =1;itr<count;itr++)
  { 
   swap=0;
   for(i=0;i<count-itr;i++)
   { 
     printf("compairing elements [%d , %d]\n",arr[i],arr[i+1]);
     if(arr[i]>arr[i+1])
     {
     temp = arr[i+1];
     arr[i+1] = arr[i];
     arr[i] = temp;
     swap =1;
     printf("swapped elements [%d , %d]\n",arr[i],arr[i+1]);
     } 
    }
   if(swap == 0)
   {
    break;
  
  }
  printf("list after %dst iteration==>>",itr);
  display(arr,count);
 }
}
void main()
{
 int arr[10],count;
 printf("Enter the total number of elements\n");
 scanf("%d",&count);
 for(int i=0;i<count;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Unsorted elements are\n");
 display(arr,count);
 bubblesort(arr,count);
 printf("sorted elements are\n");
 display(arr,count);
}















