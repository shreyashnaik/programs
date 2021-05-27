#include<iostream>
#include<string.h>
using namespace std;
class handle
{
  public:
        int age;
        int income;
        char city[20];
        char vehicle[5];
  void getdata()
        {
        cout<<"enter the following data fields"<<endl;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter income"<<endl;
        cin>>income;
        cout<<"enter the city"<<endl;
        cin>>city;
        cout<<"do you have a vehicle"<<endl;
        cin>>vehicle;
        }
  void display()
  {
        try
    {
         if(age<18||age>55)
         {
         throw 1;
         }
         if(income<50000||income>100000)
         {
         throw 1.5;
         }
         if(strcmp(city,"pune")!=0&&strcmp(city,"mumbai")!=0&&strcmp(city,"bangalore")!=0&&strcmp(city,"chennai")!=0)
         {
          throw 'j';
         }
         if(vehicle=="no")
         {
         throw "abc";
         }
         cout<<"age="<<age<<endl;
       cout<<"income="<<income<<endl;
       cout<<"city="<<city<<endl;
       cout<<"vehicle="<<vehicle<<endl;
    }
       catch(int a)
       {
        cout<<"age should be in batwen 18 and 55"<<endl;
       }
       catch(double b)
       {
       cout<<"income shoud between 50000to100000"<<endl;
       }
       catch(char o)
       {
       cout<<"you should belong to pune, mumbai, banglaore ,chennai only"<<endl;
       }
       catch(...)
       {
       cout<<"you must have the vehicle"<<endl;
       }
       
 }
 };
 int main()
      { 
      handle q;
      q.getdata();
      q.display();
      }
         

       
