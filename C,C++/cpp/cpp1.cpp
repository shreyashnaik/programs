
/*
 // Static Data members
#include<iostream>
class student
{
 public:
  static int x;
  int y = 10;
  static std::string name;
  void fun()
  {
    std::cout<<y<<"\t"<<x<<std::endl;
    std::cout<<name<<std::endl;
  }
};
int student::x=10;
std::string student::name = "shreyash";
int main()
{
  student obj,obj1;
  for(int i=10;i>0;i--)
  {
    obj.fun();
    student::x--;
  }
 // obj1.fun();
  return 0;
}*/


//static member function
# include<iostream>
class Demo
{
 public:
 int x = 10;
 static int y;
 void fun()
 {
  std::cout<<x<<"\t"<<y<<std::endl;
 }
 static void gun()
 {
  std::cout<<y;
  //std::<<cout<<x;      //shows error for this line, non static data member in staic function
 }
};
int Demo::y=20;
int main()
{
 Demo obj;
 obj.fun();  // allowed 
 obj.gun();  // allowed
 Demo::gun(); // allowed
}
 
 
 
 














 
