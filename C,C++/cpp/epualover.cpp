#include<iostream>
class Demo
{
  public:
  int a;
  int b;
  Demo(int a , int b)
  {
    this->a = a;
    this->b = b;
  }
 int operator==(Demo& rhs)
 {
 if( this->a == rhs.a && this->b == rhs.b )  
 {
 return 1;
 }
 else 
 {
  return 0;
 }
}
};
int main()
{
 Demo obj1(10,20);
 Demo obj2(10,100);
 if( obj1 == obj2)
 {
  std::cout<<"Objects are equal"<<std::endl;
 }
 else
 {
  std::cout<<"Objects are unequal"<<std::endl;  
 }
 return 0;
}
