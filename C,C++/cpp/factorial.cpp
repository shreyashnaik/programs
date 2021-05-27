# include<iostream>
using namespace std;
int main()
{ int n,i,fact;
 cout<<"ENTER THE NUMBER :>"<<endl;
 cin>>n;
 i=1;
 fact=1;
 for(i=1;i<=n;i++)
   {
     fact=fact*i;
   }
 cout<<"FACTORIAL OF GIVEN NUMBER IS:>"<<fact<<endl;
}
