# include<iostream>
using namespace std;
int main()
{ int fact,n;
 cout<<"ENTER THE NUMBER"<<endl;
 cin>>n;
 fact=fact(n);
 if(n==0)
 { 
   return (1);
 }
  else
{
 return (n*fact(n-1));
}
cout<<"FACTORIAL OF GIVEN NUMBER IS:><<fact(n);
}

