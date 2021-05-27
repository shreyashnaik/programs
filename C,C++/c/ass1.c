#include<stdio.h>
void main()
{
 char a[10];
 fgets(a,sizeof(a),stdin);
 printf("%s",a);
}
