/*#include<stdio.h>
void main()
{

 char str[100];
 int n,i,j,found;
 fgets(str,sizeof(str),stdin);
 i=0;
 while(str[i]!='\n')
 {
   j = i;
   int z = j;
   found = 0;
   while(str[j]!=' '|| str[j]!='\0')
    {
      if(str[j] =='a' || str[j] == 'z')
       {
         found = 1;
       }
      j++;
      
    }
 /* if(found == 0)
  {
   while(z<=j)
   {
    printf("%c",str[z]);
    z++;
   }
  }*/
//  i++;
 

  

  
  
      #include <stdio.h>
  void main()
  {
   char str[50];
   int i,j,n,found;
   fgets(str,sizeof(str),stdin);
   for(i=0;str[i]!='\n';i++)
    { j=i;
      while(str[i]!=' ' || str[i]!='\n')
       {
        if(str[i] == 'a' || str[i] == 'z')
         {
          found = 1;
         }
         i++;
       }
      if(found ==1)
      {
       while(j<=i)
       {
        printf("%c",str[j]);
       }
      }
    }
   }
  
  
  
  
 
