#include <iostream>
using namespace std;
int main()
{ int a[15],i,mid,l,r,roll,n;
  bool flag=0;
 cout<<"ENTER THE TOTAL NUMBER OF STUDENTS"<<endl;
 cin>>n;
 cout<<"ENTER THE ROLL NUMBER OF THE STUDENTS"<<endl;
  for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
  cout<<"ENTER THE ROLL NUMBER YOU ARE LOOKING FOR"<<endl; 
  cin>>roll; 
  l=0;
  r=n-1;
  while(l<=r)
   { flag=0;
    mid=(l+r)/2;
    if(roll==a[mid])
     { flag=1;
      cout<<"PRESENT"<<endl;
      break;
     }
    else if(roll<a[mid])
     {
       r=mid-1;
     }
     else
     {
       l=mid+1;
     }
   }
 if(flag==0)
 {
   cout<<"ABSENT"<<endl;
 }
}
     

   
