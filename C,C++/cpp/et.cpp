# include <iostream>
using namespace std;
int main()
{
 int n,i,j;
 cout<<"enter the side of the equilateral triangle"<<endl;
 cin>>n;
for(i=0;i<=n;i++)
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
