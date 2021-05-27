#include<stdio.h>
#include<stdlib.h>
void main()
{
 char *p;
 p = (str*)malloc(3*sizeof(char));
 fgets(*p,sizeof(p),stdin);
 printf("%s",*p);
 }
