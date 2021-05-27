# include<stdio.h>
void sort(int arr[],int count)
{
 int temp;
 for(int i=0;i<count;i++)
  {
   for(int j=i;j<count;j++)
    {
     if(arr[i]>arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] =temp;
      }
    }
   }
 }
int Binary_search(int arr[],int count,int search)
{
 int first =0 ,last= count-1, mid;
 while(first<=last)
 {
   mid = (first+last)/2;
   if(search == arr[mid])
    {
     return mid;
    }
    else if(search>arr[mid])
         {
          first = mid+1;
         }
         else{
           last = mid-1;
           }
  }
  return -1;
 }

void main()
{
 int arr[100];
 int count,search,index;
 printf("Enter total no of elements\n");
 scanf("%d",&count);
 for(int i =0;i<count;i++)
 {
  scanf("%d",&arr[i]);
 }
 sort(arr,count);
 printf("Sorted elements are:=>\n");
 for(int i=0;i<count;i++)
 {
  printf("%d ",arr[i]);
 }
 printf("Enter element to search\n");
 scanf("%d",&search);
 index = Binary_search(arr,count,search);
 if(index == -1)
 {
  printf("Element not Found\n");
 }
 else
 {
  printf("NUmber is found at index %d ",index);
 }
}

