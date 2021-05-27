#include<stdio.h>
void main()
{ 
  int flag = 0;
  int len = 0;
  char str[50];
  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);
  for(int i=0;str[i]!='\n';i++)
  {
    len++;
  }
  printf("%d",len);
 // int c = len;
  //printf("%c",str[8]);
 for(int i = 0;str[i]!='\n';i++)
  {
    if(str[i] == str[len-i-1])
    {
     flag = 0;
    }
    else
    {
     flag =1;
     break;
    }
  }
  if(flag == 0)
  {
   printf("string is palindrome\n");
  }
  else
  {
  printf("string is nit palindriome\n");
  }
  
}
 
