//string palindrome

#include<stdio.h>
#include<stdlib.h>
void main()
{
char ch;
int i=0,j=1,flag=1;
char *str1 = NULL;
str1 = (char*)malloc(sizeof(char));
*(str1+0) = '\0';
printf("enter the string\n");
do
 {
  scanf("%c",&ch);
  if(ch!='\n')
   {
     j++;
     str1 = (char*)realloc(str1,j*sizeof(char));
     *(str1+i)=ch;
     *(str1+i+1)='\0';
     i++;
   }
 }while(ch!='\n');
 printf("%s\n",str1);
 int size = 0;
 for(int i=0;*(str1+i)!=0;i++)
  {
   size++;
  }
  printf("%d\t",size);
 
 
 for(int i=0;i<size;i++)
  {//printf("inside for\n");
   if(*(str1+i)==*(str1+(size-1-i)))
    {//printf("inside if");
     flag = 1;
    }
  else
  {
   flag = 0;
   break;
  }
 }
 if(flag == 1)
 {
  printf("string is palindrome\n");
  } 
  else
  printf("not palindrome\n");
  }




  
