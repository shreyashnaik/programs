#include <iostream>
using namespace std;
class sport
{
  public:
   int i,j,n,cr,ba;
   int c[10];
   int b[10];
   bool flag=0;
   void cricket()
   {
    cout<<"enter total no of student plays cricket"<<endl;
    cin>>cr;
    cout<<"enter the roll number of students who play cricket"<<endl;
    for(i=0;i<cr;i++)
      {
        cin>>c[i];
      }
    }
    void batminton()
    {
     cout<<"enter the total no of students plays batminton"<<endl;
     cin>>ba; 
     cout<<"enter the roll no odf students plays batbonton"<<endl;
     for(j=0;j<ba;j++)
     {
        cin>>b[j];
     }
     }
     void intersection()
     { cout<<"enter roll number of students plays both games"<<endl;
       for(i=0;i<cr;i++)
        {
	flag=0;	
         for(j=0;j<ba;j++)
          {
            if(c[i]==b[j])
            flag=1;
            
          }
          if (flag==1)
          cout<<c[i]<<endl;
       }
       }
       void onlycri()
       {  cout<<"enter roll number of students plays only cricket"<<endl;
              for(i=0;i<cr;i++)
        {
	flag=0;	
         for(j=0;j<ba;j++)
          {
            if(c[i]==b[j])
            flag=1;
            
          }
          if (flag==0)
          cout<<c[i];
         
      }
      }
      void onlybat()
      {
       cout<<"enter the roll number of students plays only batminton"<<endl;
      for(j=0;j<ba;j++)
       { flag=0;
        for(i=0;i<cr;i++)
          {
            if(b[j]==c[i])
             {
               flag=1;
             }
           } if(flag==0)
               
               cout<<b[j]<<endl;
        }
       }
      };
           
 int main()
 {
  sport x;
  x.cricket();
  x.batminton();
  x.intersection();
  x.onlycri();
  x.onlybat();
 }         
     
     
    
       
