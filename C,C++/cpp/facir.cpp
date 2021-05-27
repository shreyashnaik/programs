# include <iostream>
using namespace std;
int fact(int n)
 { int fac;
   if(n==0)
    {
      return (1);
    }
else
    { 
      return(n*fact(n-1));

      //return (fac);
     }
}
int main()
{
 int n;
 cout<<"enter the number"<<endl;
 cin>>n;
 
 cout<<"factorial is:>"<<fact(n);
}

