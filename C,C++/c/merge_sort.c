#include<stdio.h>
//********************************************
void display(int arr[],int n)
{
 printf("[ ");
 for(int i=0 ;i<n;i++)
 {
  printf("%d ",arr[i]);
 }
 printf(" ]\n");
}
//*********************************************
void merge(int arr[],int low,int mid,int high)
{
 int i,j,k=0,b[100];
 i = low;
 j = mid+1;
 while(i<= mid && j<= high)
 {
   if(arr[i] < arr[j])
   {
    b[k] = arr[i];
    i++;
    k++;
   }
   else
   {
    b[k] = arr[j];
    j++;
    k++;
   } 
 }
 while(i<=mid)
 {
  {
   b[k]=arr[i];
   k++;i++; 
  }
 }
while(j<=high)
{
 b[k] = arr[j];
 k++;j++;
};
k=0;
for(int i=low;i<=high;i++)
{
 arr[i] = b[k];
 k++;
}
}
//**********************************************
void merge_sort(int arr[],int low,int high)
{
 int mid;
  if(low < high)
  {
   mid = (low+high)/2;
   merge_sort(arr,low,mid);
   merge_sort(arr,mid+1,high);
   merge(arr,low,mid,high);
  }
}
//**********************************************
int main()
{
 int arr[100];
 int n;
 printf("Enter total number of elements =>>\n");
 scanf("%d",&n);
 printf("Enter array elements =>>\n");
 for( int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Unsorted array:=>> ");
 display(arr,n);
 merge_sort(arr,0,n-1);
 printf("sorted array =>> ");
 display(arr,n);
}
