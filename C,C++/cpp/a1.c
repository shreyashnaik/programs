
/*
#include<stdio.h>
void main()
{
 int number,count=0,a;
 printf("Enter the number \n");
 scanf("%d",&number);
 while(number>0)
 {
   number=number/10;
   count++;
 }
 printf("Number of digits = %d",count);
}

/*
#include<stdio.h>
void main()
{
 int number,first=0,last,num;
 printf("Enter the number \n");
 scanf("%d",&number);
 last = number%10;
 printf("last digit is %d",last);
 while(number>0)
 {
  //number = number/10;
  first = number%10;
  number = number/10;
 }
 printf("first number is %d",first);
 
}
*/

/*
#include<stdio.h>
void main()
{
 int number,n,sum=0;
 printf("Enter a number \n");
 scanf("%d",&number);
 while(number>0)
 {
  sum = sum + number%10;
  number = number/10;
 }
 printf("Sum of digits of number is %d",sum);
}
*/
/*
#include<stdio.h>
void main()
{
 int num,rev=0,rem;
 printf("Enter a number \n");
 scanf("%d",&num);
 int check = num;
 while(num>0)
 {
   rem = num%10;
   num = num/10;
   rev = rev*10+rem;
 }
 printf("reverse of a number is %d\n",rev);
 if(rev == check)
 {
  printf("yes\n");
 }
 else
 {
  printf("The given number is nor palindrome\n");
 }
}
 */
/*
#include<stdio.h>
void main()
{
 int num,sum=0;
 printf("Enter a number \n");
 scanf("%d",&num);
 for(int i=1;i<num;i++)
 {
  if(num%i == 0)
  {
   sum = sum+i;
  }
 }
  if(sum == num)
  {
   printf("Number is perfect\n");
  }
  else
  { 
  printf("Not perfect\n");
  }
}
*/

#include<stdio.h>
void main()
{
 int num,fact=1;
 printf("Enter a number\n");
 scanf("%d",&num);
 for(int i=num;i>=1;i--)
 {
  fact = fact*i;
 }
 printf("Factorial of given number is %d\n",fact);
}












 
