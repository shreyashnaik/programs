//enter the string and print as it is
/*
# include<stdio.h>
 void main()
 {
   char str[11];
   //int i=0;
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   printf("%s",str);
   
 }
 */
 
 //enter a string and print it with single space
 
 # include<stdio.h>
 void main()
 {
  char str[50];
  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
      printf("%c",str[i]);
    }
    else if((str[i]==' ' && str[i+1]!=' '))
          {
             printf(" ");
          }
   }
 }
 
  //print number of characters
  /*
# include<stdio.h>
void main()
{
  char str[50];
  int count=0;
  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\n';i++)
  {
   count++;
  }
  printf("count of elements = :>%d\t",count);
  }
  */
  
  
 // reverse the string 
  /*
  # include<stdio.h>
void main()
{
  char str[50];
  int count=0;
  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\n';i++)
  {
   count++;
  }
  printf("count of elements = :>%d\t",count);
  
  for(int i=count;i>=0;i--)
  {
    printf("%c",str[i]);
  }
 }
 
 */
 
 //replace space with $
 
 /*
 # include<stdio.h>
 void main()
 {
   char str[50];
   
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   printf("%s",str);
   for(int i=0;str[i]!='\n';i++)
   {
     if(str[i]==' ')
      {
        str[i]='$';
       }
       }
       printf("%s",str);
      
     
   }
    
      
     */
     
//print last word in a sentence
/*
  
      # include<stdio.h>
 void main()
 {int i;
   char str[50];
   int count=0;
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   printf("%s",str);
   for( i=0;str[i]!='\n';i++)
  {
   count++;
  }
  printf("count of elements = :>%d\t",count);
  
  for(i=count;str[i]!=' ';i--)
 {
}
  for(int a=i;a<=count;a++)
  {
   printf("%c",str[a]);
 }
 }
 */
 
 
 //capital to small and vise versa
 /*
  # include<stdio.h>
 void main()
 { int i;
   char str[50];
   //int count=0;
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   for(int i=0;str[i]!='\n';i++)
   { if(str[i]==' ')
   {
     printf(" ");
     }else
     {
     str[i]=str[i]+32;
     printf("%c",str[i]);
    }
  }
  }
 */
 
 
 //print the word at given position
/* 
 # include<stdio.h>
  void main()
  {int count=0;
   char str[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   int choice;
   printf("enter the number on which locan word should print\n");
   scanf("%d",&choice);
   for(int i=0;str[i]!='\n';i++)
    {
     
     if(str[i]==' ')
     {
      count++;
      
     }
     if(count==choice-1)
     {i++; 
     choice=i;
     
      break;
     }
     }
     for(int i=choice;str[i]!=' '&&str[i]!='\0';i++)
     {
      printf("%c",str[i]);
      }
      }
      */
      
 //toogles the cases
 /*
 #include<stdio.h>
  void main()
  {
   char str[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   for(int i=0;str[i]!='\n';i++)
   {
     if(str[i]==' ')
     {continue;}
    if(str[i]>='a'&&str[i]<='z')
     {
       str[i]=str[i]-32;
     }
      else
      {
      str[i]=str[i]+32;
      } 
     }
    printf("%s",str);
   }
   */
   
// copy one string to another
/*
#include<stdio.h>
  void main()
  {
   char str[50];
   char str1[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   for(int i=0;str[i]!='\0';i++)
   {
     str1[i]=str[i];
   }
   printf("copied string is %s",str1);
   }
  */
   
 //copy given no of letters into the string
 /*
 #include<stdio.h>
  void main()
  { 
   int choice;
   char str[50];
   char str1[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   printf("enter no of char to copy");
   scanf("%d",&choice);
   for(int i=0;i<choice;i++)
    {
     str1[i]=str[i];
      //printf("%c",str1[i]);
    }
    str1[choice]='\0';
     printf("%s",str1);
  }
  */
   
   
   //accept 2 strings and compare n charactors
  /*  #include<stdio.h>
  void main()
  { int miss=0,flag;
   int choice;
   char str[50];
   char str1[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   fgets(str1,sizeof(str1),stdin);
   printf("enter how many char u want to compare\n");
   scanf("%d",&choice);
   for(int i=0;i<choice;i++)
   {
     if(str[i]==str1[i])
      {
       flag=1;
      }
      else
      {
      flag=0;
      miss++;
      }
     }
     if(flag==1)
     {
      printf("stringss are equal");
     }
     else
     {printf("not equal missed by %d\t",miss);
     }
    }
    */
    
    //copy last n charactors to the string
  /*  
    #include<stdio.h>
  void main()
  { 
   int choice,count=0,j=0,i;
   char str[50];
   char str1[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   printf("enter no of char to copy");
   scanf("%d",&choice);
   for(int i=0;str[i]!='\n';i++)
   {
     count++;
   }
   printf("%d\t",count);
   for( i=count;i>=choice;i--);
   {
    str1[j]=str[i];
    j++;
   }
   printf("copied string is\n");
   printf("%s",str1);
   } 
   */
   
 // tooggle case compare
 /*  
    #include<stdio.h>
  void main()
  { int count=0,count1=0;
   int choice,j=0,i,flag=0;
   char str[50];
   char str1[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   fgets(str1,sizeof(str1),stdin);
 int a=sizeof(str);
 int b=sizeof(str1);
   if(a==b)
    {
     for(int i=0;str[i]!='\n';i++)
     { 
       
       if(str[i]==str1[i] || str[i]==str1[i]+32 ||str[i]==str1[i]-32)
       {
         flag=1;
       }
       else
       flag=0;
       break;
   }
    if(flag==1)
     {
      printf("strings are equal");
     }
    else
    printf("not equal");
   }
    else
   {
   printf("strings are not equal");
   }
 }
 */
 
/* //string palindrome
#include<stdio.h>
  void main()
  { int space=0,letters=0,word=0;
   int choice,count=0,j=0,i;
   char str[50];
   char str1[50];
   printf("enter the string\n");
   fgets(str,sizeof(str),stdin);
   for(int i=0;str[i]!='\n';i++)
   {
     if(str[i]==' ')
      {
       space++;
      }else
      letters++;
   }
   word=space+1;
   printf("space=%d\nalphabates=%d\nword=%d\n",space,letters,word);
  }
    */
