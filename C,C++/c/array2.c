//find no of elements in array

#include<stdio.h>
#include<math.h>
void main()
{
 int a[]={1,2,3,4,52,54,5,4};
 int count=0;
 for( int i=0;i<(sizeof(a)/4);i++)
 {
   count++;
  }
  printf("count= %d\t",count);
 
 
}
 
 
 
 
 //check array bounds while inputing
 
/* #include<stdio.h>
 void main()
 {
   int a[10];
   printf("enter array elements\n");
   for(int i=0;;i++)
   {
     scanf("%d",&a[i]);
     if(i==10)
     {
       printf("array out of bound\n");
       break;
      }
    }
   }
   */
   
 // alternate elements in array
 
/* # include<stdio.h>
 void main()
 {
  int a[10];
  printf("enter elements in array");
  for(int i=0;i<10;i++)
   {
     scanf("%d",&a[i]);
   }
   for(int i=0;i<10;i=i+2)
   {
      printf("%d\n",a[i]);
    }
  }
  */
  
  
  // diff betn 2 elements is largest
  
 /*# include<stdio.h>
 void main()
 {
   int a[5],diff,max=0;
     
   printf("enter elements in array");
  for(int i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
      for(int j=0;j<5;j++)
      {
         diff = a[i]-a[j];
         if(diff>max)
          {
            max=diff;
          }
       }
     }printf("maximum diff= %d\t",max);
   }
   */
   
   // square of elements in same array
 /*  
    # include<stdio.h>
 void main()
 {
   int a[5],diff,max=0;
     
   printf("enter elements in array");
  for(int i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
     a[i]=a[i]*a[i];
    }
    for(int i=0;i<5;i++)
   {
   printf("%d\t",a[i]);
     
    }
  }
  */
  
  //
    
/*  # include<stdio.h>
 void main()
 {
   int a[5],sum,max=0;
     int look=5;
     
   printf("enter elements in array");
  for(int i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   for(int i=0;i<5;i++)
   {
      for(int j=0;j<5;j++)
      {
         sum = a[i]+a[j];
         if(sum>max)
          { if(max>25)
            continue;
            max=sum;
          }
       }
     }printf("closest no= %d\t",max);
   }
   
   */
   


