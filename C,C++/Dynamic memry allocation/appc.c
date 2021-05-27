//string equal or not
/*
#include<stdio.h>
#include<stdlib.h>
void compare(char*str,char*str1)
{int flag = 0;
  for(int i=0;*(str+i)!='\0'||*(str1+i)!='\0';i++)
   {  
     if(*(str+i)==*(str1+i))
       { flag = 1;
       }
       else
       flag = 0;
   }
   if(flag == 1)
     {
       printf("strings are equal\n");
     }
     else
     printf("strings are not equal\n");
 }
         
void main()
{
 char ch;
 int i=0,j=1;
 char*str = NULL;
 char*str1 = NULL;
 str = (char*)malloc(sizeof(char));
 *(str+i) = '\0';
 printf("enter the first string\n");
 do
  {
   scanf("%c",&ch);
   if(ch!='\n')
   {
     j++;
     str = (char*)realloc(str,j*sizeof(char));
     *(str+i) = ch;
     *(str+i+1) = '\n';
     i++;
    }
   }while(ch!='\n');
  int p=0;
  int q=1;
  str1  = (char*)malloc(sizeof(char));
  *(str+p) = '\n';
  printf("enter the second string\n");
  do
  {
   scanf("%c",&ch);
   if(ch!='\n')
   {
    q++;
    str1 = (char*)realloc(str1,q*sizeof(char));
    *(str1+p) = ch;
    *(str1+p+1) = '\n';
    p++;
    }
   }while(ch!='\n');
   compare(str,str1);
  }
  */
  
 
 //string concatination
 # include<stdio.h>
 #include<stdlib.h>
 void main()
 {
  char ch;
  int i=0,j=1;
  char *str = NULL;
  char *str1 = NULL;
  char *str2 = NULL;
  str = (char*)malloc(sizeof(char));
  *(str+i) = '\0';
  printf("enter the first string\n");
  do
   { scanf("%c",&ch);
    if(ch!='\n')
     {
      j++;
      str = (char*)realloc(str,j*sizeof(char));
      *(str+i) = ch;
      *(str+i+1) = '\n';
      i++;
      }
    }while(ch!='\n');
    printf("done");
  i=0;
   j=1;
  str1 = (char*)malloc(sizeof(char));
  *(str1+i) = '\0';
  printf("enter the second string\n");
  do
   {scanf("%c",&ch);
    if(ch!='\n')
     {
      j++;
      str1 = (char*)realloc(str1,j*sizeof(char));
      *(str1+i) = ch;
      *(str1+i+1) = '\n';
      i++;
      }
    }while(ch!='\n');
   i=0;
    while(*(str+i)!='\n')
     {printf("inside while\n");
       i++;
     }
    printf("%d",i);
    int p=0,k=0;
    while(*(str1)!='\n');
     {j++;
      str = (char*)realloc(str,j*sizeof(char));
      *(str+i) = *(str1+p);
      i++;
      p++;
     }
     printf("%d",p);
    
     *(str+i) = '\n';
    printf("new string%s\t",str);
  
    }
       
