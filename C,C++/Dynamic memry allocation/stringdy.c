//string palindrome

#include<stdio.h>
#include<stdlib.h>
void main()
{
char ch;
int i=0,j=1,flag;
int size = 0;
char *str = NULL;
str = (char*)malloc(sizeof(char));
*(str+0) = '\0';
printf("enter the string\n");
do
 {
  scanf("%c",&ch);
  if(ch!='\n')
   {
     j++;
     str = (char*)realloc(str,j*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
     i++;
   }
 }while(ch!='\n');
 printf("%s\n",str);
 for(int i=0;*(str+i)!='\n';i++)
  { 
    size++;
  }
 printf("%d\n",size);
 for(int i=0;*(str+i)!='\n';i++)
  {
   if(*(str+i)==*(str+(size-i)))
    {
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
}



  
