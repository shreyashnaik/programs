 //  1 print natural number
 
 /* # include<stdio.h>
   void main()
   {
    int i=1;
    while(i<50)
    {
     printf("%d\n",i);
     i++;
    }
   }
   */
   
 // 2 natural number in reverse
 
  /* # include<stdio.h>
   void main()
   {
    int i=50;
    while(i>=1))
    {
     printf("%d\n",i);
     i;
    }
   }
 */
 
 // 3 alphabates
  
 /* #include<stdio.h>
  void main()
  {
   int i='A';
   while( i<='Z')
   {
     printf("%c\n",i);
     i++;
    }
   }
  */
   
   
// 4 ASCII values

  /*# include<stdio.h>
    void main()
    {
      int i= 'A';
      while(i<= 'Z')
      {
       printf("%d\n",i);
       i++;
      }
     }
   */
   
  
// 5 ,6 sum of even no
   
  /*# include<stdio.h>
    void main()
     {
       int sum = 0,i=1;
       
        while(i<=10)
        {
          if(i%2==0)
          {
           sum=sum+i;
           }
           i++;
         } 
         printf("sum of even no is = %d ",sum);
        }
     */
     
     
// 7 multiplication table
    
   /*#include<stdio.h>
   void main()
   {
    int a,j;
    printf("enter the no ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
       j=a*i;
       printf("%d\n",j);
    }
   }
  */
  
  
  // 8 factorial of a no
  
 /* # include<stdio.h>
   void main()
   {   int a,fact=1;
        printf("enter any number");
        scanf("%d",&a);
        for(int i=a;i>0;i--)
         {
           fact=fact*i;
          }
          printf("factorial of a number is :%d\t",fact); 
      }
   */
   
  // 9 power of a number using for loop
  
 /* # include<stdio.h>
   void main()
   {
    int a,power;
    printf("enter the number\n");
    scanf("%d",&a);
    int t=a;
    printf("enter the requried power\n");
    scanf("%d",&power);
    for( int i=1;i<=power-1;i++)
    {
      a=a*t;
      
    }
    printf("power =: %d",a);
   }
   */
   
     
   //10 find count of digit in number
   
  /* # include<stdio.h>
    void main()
    {
      int a,count=0;
      printf("enter any number");
      scanf("%d",&a);
      while(a>0)
      {
       a=a/10;
       count++;
       }
      printf("count= %d\t",count);
    }
    */
    
    // 11 find first and last number
    
    
   /*#include<stdio.h>
   void main()
   {
     int a,first ,last;
     printf("enter your number");
     scanf("%d",&a);
     last = a%10;
     while (a>0)
     {
       
       first=a%10;
       a=a/10;
      }
     printf("last=%d\t",last);
     printf("first=%d\t",first);
    }
    */
   
   //12  swapping first and last number
   
   
  /* # include <stdio.h>
   void main()
   {
      int a,count=0,temp,temp1,first,last;
      printf("enter the number\n");
      scanf("%d",&a);
      temp=a;
      temp1=a;
      while(a>0)
      {
        a=a/10;
        count++;
      }
     printf("count = %d\t",count);
     last= temp%10;
     while(temp>0)
      {
        first =  temp%10;
        temp=temp/10;
      }
      int first1 = first;
      temp1=temp1-last;
      for(int i=0;i<count-1;i++)
      {
        last=last*10;
      }
      for(int j=0;j<count-1;j++)
      {
        first = first*10;
      }
      temp1 = temp1 - first;
      temp1 = last + temp1 + first1;
      printf("%d\t",temp1);
      } 
    */
    
    //13,14 print even /odd no
    
  /*  #include<stdio.h>
    void main()
    {
     
     for( int i=0;i<=10;i++)
     {
        if(i%2==0)
        {
         printf("%d\n",i);
        }
     }
     
    }
    */
    
   //15 factors of number  
   
  /* # include<stdio.h>
    void main()
    {
     int a;
     printf("enter the number\n");
     scanf("%d",&a);
     printf("factors of given number are\n");
     for(int i=1;i<=a;i++)
     {
        if(a%i==0)
        {
          printf("%d\n",i);
        }
      }
     }
     */
     
  // 16,17 find the gcd 
  
 /* #include<stdio.h>
  void main()
  {
    int a,b,i,gcd;
    printf("enter two numbers");
    scanf("%d\n%d",&a,&b);
    for(i=1;i<=a||i<=b;i++)
     {
       if(a%i==0 && b%i==0)
       {
         gcd=i;
        // break;
       } 
     }
     printf("GCD of a number = %d\n",gcd);
   }
  */
    
 // 18 given no is prime or not
 /* 
  # include<stdio.h>
 void main()
   {
     int a,flag=0; 
     printf("enter a number\n");
     scanf("%d",&a);
     for(int i=1;i<a;i++)
     { if(i==1)
       {
        continue;
        }
       if(a%i==0)
        {
         flag=1;
        }
        
        
      }
      if(flag==0)
      {
      printf("the given number is a prime number\n");
      }
      else
      printf("it is not a prime number\n");
     }
*/
    
      
 //19 to print the prime numbers in a range
 
 
 /*# include <stdio.h>
 void main()
 {
   int a,flag=0,sum=0;
   for(int i=1;i<10;i++)
    { flag=0;
       if (i==1)
       {
        continue;
       }
       for(int j = 1;j<i;j++)
       {
         if (j==1)
         {
          continue;
         }
         if(i%j==0)
         {
          flag=1;
         }
        }
       
        if(flag==0)
        {
         printf("%d\n",i);
         sum=sum+i;
        }
       }
       printf("sum of a prime numbers =%d\t",sum);
      }
      */
      
      
 // 20 prime factors of a number
 
/* # include<stdio.h>
   void main()
   {
     int a,flag=0;
     printf("enter your number\n");
     scanf("%d",&a);
     for(int i=1;i<=a;i++)
     { 
      if(a%i==0)
      { 
       if(i==1)
       {
         continue;
        }
       for(int j=1;j<i;j++)
        {
          if(j==1)
          {
           continue;
          }
          if(i%j==0)
          {
            flag=1;
          }
         }
        if(flag==0)
        {
         printf("%d\n",i);
        }
       }
      } 
      } 
   */  
   
   // 21 addition of digits
   
  /* # include<stdio.h>
    void main()
    {
     int a,b,sum=0;
     printf("enter the number\n");
     scanf("%d",&a);
    while(a>0)
    {
     b=a%10;
     a=a/10;
     sum=sum+b;
     }
     printf("sum =%d\t",sum);
    }
    */
    
    // 22 reverse of a number
 /* #include<stdio.h>
    void main()
    {
 int n;
 int rev=0;
  int rem;
 printf("enter the number\n");
 scanf("%d",&n);
 while(n>0)
 {
  rem=n%10;
  n=n/10;
  rev=rev*10+rem;
 }
printf("%d",rev);
}



 // 23palindrome of a number
 
  
 /*  #include<stdio.h>
    void main()
   {
 int n,test;
 int rev=0;
  int rem;
 printf("enter the number\n");
 scanf("%d",&n);
 test=n;
 while(n>0)
 {
  rem=n%10;
  n=n/10;
  rev=rev*10+rem;
 }
  printf("%d",rev);
 if(test==rev)
 {
  printf("the given ny=umber is palindrome\n");
 }
 else
 printf("not palindrome\n");
}
*/

// 24sum of digits of number

 /* # include<stdio.h>
   void main ()
   {
     int a,sum=0;
     printf("enter the number\n");
     scanf("%d",&a);
     while(a>0)
     {
      sum=sum+a%10;
      a=a/10;
     }
     printf("sum is = %d",sum);
    }
 */
     
   
   //25 multiplication of digit
   
   
  /*  # include<stdio.h>
   void main ()
   {
     int a,product=1,d;
     printf("enter the number\n");
     scanf("%d",&a);
     while(a>0)
     {  
      //d=a%10;
      product=product*(a%10);
      a=a/10;
     }
     printf("product is = %d",product);
    }
  */
 
 //26number in words
 
/* # include<stdio.h>
 void main()
 {
  int i=0,n,c=0,r,j,a;
  printf("enter the number\n");
  scanf("%d",&n);
  while(i>0)
  {
   r=n%10;
   n=n/10;
   i=i*10+r;
   }
  printf("%d",i);
  while(i>0)
  {
  a=a%10;
  i=i/10;
  switch(a)
  {
   case 0: printf("zero");
            break; 
    case 1: printf("one");
            break;
    case 2: printf("two");
            break;
     case 3: printf("three");
            break;
      case 4: printf("four");
            break;
      case 5: printf("five");
            break;
      case 6: printf("six");
            break;
    case 7: printf("seven");
            break;
    case 8: printf("eight");
            break;
     case 9: printf("nine");
            break;
 }
 }
 }
 */
 
    
 // 27frequency count
/* #include<stdio.h>
 void main()
{
  int no,c=0,techno;
  printf("\n Enter number ");
  scanf("%d",&no);
  for(int i=0;i<=9;i++)
 {
   c=0;
   techno=no;
   while(techno>0)
   {
    if(i==techno%10)
    {
     c++;
     }
     techno=techno/10;
   }
   if(c!=0)
   {
    printf("\n count of %d is %d ",i,c);
    }		
   }		
}
*/

// 28check for given number is perfect or not

 /*# include<stdio.h>
  void main()
  {
  int a,sum=0;
  printf("enter a number\n");
  scanf("%d",&a);
  for(int i=1;i<a;i++)
  {
    //if(i==1)
    //{
     //continue;
    //}
    if(a%i==0)
    {
      sum=sum+i;
    }
  }
  if(sum==a)
  {
   printf("no is perfect\n");
  }
  else
  printf("not perfect\n");
 }
*/

 //29strong number
 
 /*#include<stdio.h>
 void main()
 {
  int a,r,sum=0,fact,temp;
  printf("enter the number\n");
  scanf("%d",&a);
  r=a;
  while(a>0)
  {
   temp=a%10;
  fact=1;
   for(int i=temp;i>0;i--)
   {   
     fact=fact*i;
   }
   sum=sum+fact;
   a=a/10;
  }
  if(sum==r)
  {
   printf("strong number\n");
  }
   else
   printf("not strong");
  }
   
  */ 
 
//30 Armstrong number
/*
# include<stdio.h>
 void main()
 {
  int num,count=0,rem,rem1,sum=0;
  printf("Enter a number \n");
  scanf("%d",&num); 
  int num1 = num;
  int num2 = num;   
  printf("%d\n",num1);
   
  while(num>0)
  {
   num = num/10;
   count++;
  }
  printf("Total number of digits = %d\n",count); 
 while(num1>0)
 {
  rem = num1%10;
  rem1 = rem;
  num1 = num1/10;
  for(int i=0;i<count-1;i++)
  {
   rem = rem*rem1;
  }
  printf("%d\n",rem);
  sum = sum+rem;
 }
 if(sum == num2)
 {
  printf("armstrong/n");
 }
 else
 {
 printf("not armstrong\n");
 }
}
 */










         
           
           
           
