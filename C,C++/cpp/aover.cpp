#include<iostream>
class Demo
{
 public:
 int a;
 int b;
 Demo(Demo&rhs)
 {
  this->a =rhs.a;
  this->b = rhs.b;
 }
 Demo(int a,int b)
 {
  this->a = a;
  this->b = b;
 }
 Demo& operator+(Demo& rhs)               //only Demo has to return not     a                                                      reference
 {
  Demo * objptr = (Demo*)malloc(sizeof(Demo));
  objptr->a = this->a+rhs.a;
  objptr->b = this->b+rhs.b;
  return(*objptr);
 }
 ~Demo()
 {
  free(objptr);
 }
 };
 int main()
 {
  Demo obj1(10,20);
  Demo obj2(30,40);
  Demo d3 = obj1+obj2;
  std::cout<<d3.a<<std::endl<<d3.b<<std::endl;
 }
  
