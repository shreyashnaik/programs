#include<iostream>
using namespace std;
int main()
{ 
 int n,i,j;
 cout<<"ENTER THE SIDE OF EQUILATERAL TRIANGLE !"<<endl;
 cin>>n;
   for(i=1;i<=n;i++)
   {
      for(j=0;j<n-i;j++)
      {
        cout<<" "; 
      }
      for(j=0;j<2*i-1;j++)
      {
        cout<<"*";
      }
     cout<<endl;
   }
 return 0;
}
