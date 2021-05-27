# include<stdio.h>
void main()
{
  int a[100],b[100],c[100],i,flag=0,min=0,j,k,temp,temp1,no1,no2,no3;
  printf("how many elements u want in array 1");
  scanf("%d",&no1);
  printf("enter array elements\n");
  for(  i=0;i<no1;i++)
    {
      scanf("%d",&a[i]);
    }
 /*printf("array elements are :- ");
     for( int i=0;i<5;i++)
    {
      printf("%d\t",a[i]);
    }
   */
   
  // searching  
  
 /* printf("enter the number to find\n");
  scanf("%d",&b);
  for (i=0;i<5;i++)
   {
     if(b==a[i])
      {
       flag=1;
      }
     
   }
  if(flag==1)
  {
    printf("element found");
   }
   else
   printf("not found");
  }*/
  
  
  //maximum & minimum
 /* min=a[0];
  for(i=0;i<5;i++)
   { 
     if (i==0)
     {
       continue;
      }
      if(a[i]<min)
      {
        min = a[i];
      }
    }
    printf("min =%d\t",min);
   }
 */
 
 
 //sorting
 /*for(i=0;i<5;i++)
  {
     for(j=i+1;j<5;j++)
       {
        if(a[i]>a[j])
         {
           temp=a[i];
           a[i] = a[j];
           a[j]=temp;
         }
     }
   }
   for(i=0;i<5;i++)
   {
    printf("%d\n",a[i]);
   }
   
 }
 */
 
 //merging
 /* printf(" how many elements in array2");
scanf("%d",&no2);
for(i=0;i<no2;i++)
{
 scanf("%d",&b[i]);
}
no3=no2+no1;

printf("total no of elements in array3 : %d\t",no3);
for(i=0;i<no1;i++)
{
  c[i]=a[i];
}
for(i=0;i<no2;i++)
 {
  c[no1]=b[i];
  no1++;
  }
  printf("array 3 = : \n");
  for(i=0;i<no3;i++)
  {
    printf("%d\n",c[i]);
   }
}

  
