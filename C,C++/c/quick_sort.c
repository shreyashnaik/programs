# include<stdio.h>
void display(int arr[],int n)
{
 printf("[ ");
 for(int i=0;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf(" ]\n");
}

void quick_sort(int arr[],int L,int H,int n)
{
 int low,high,pivot,temp;
   pivot = arr[L];
  low = L+1;
  high = H;
 while(low <=high)
 {
  

  while(low <=H && arr[low]<pivot)
  {
   low++;
  }
  while(arr[high]>pivot)
  {
   high--;
  }
  if(low<high)
  {
   temp = arr[high];
   arr[high] = arr[low];
   arr[low] = temp;
   low++;
   high--;
  }
 }
 
  temp = arr[L];
  arr[L] = arr[high];
  arr[high] = temp;
 
 if(L < high)
 {
  quick_sort(arr,L,high-1,n);
//  display(arr,n);
 }
 if(low <H)
 {
  quick_sort(arr,high+1,H,n);
 } 
}

void main()
{
 int arr[10],n;
 printf("Enter total number of elements:= ");
 scanf("%d",&n);
 printf("Enter array elements\n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Unsorted elements => ");
 display(arr,n);
 quick_sort(arr,0,n-1,n);
 printf("sorted elements are => ");
 display(arr,n);
}
