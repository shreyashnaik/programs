#include<iostream>
using namespace std;
int main()
{
 int i,j,a[10],temp;
 for( i=0;i<5;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<5-1;i++)
  {
   for(j=0;j<5-i-1;j++)
    {
     if(a[j]<a[j+1])
     {
      temp = a[j+1];
      a[j+1] = a[j];
      a[j] = temp;
     }
    }
    }
    for(i=0;i<5;i++)
    {
     cout<<a[i]<<endl;
     }
  }
     
     
     
     
