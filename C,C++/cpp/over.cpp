#include<iostream>
class Demo
{
 public:
 int a;
 int b;
 int *p;
 Demo(int a,int b,int c)
  {
   this->a = a;
   this->b = b;
   this->p = (int*) malloc(sizeof(int));
  *(this->p) = c;
  }
 Demo& operator=(const Demo& rhs)
  {
  this->a = rhs.a;
  this->b = rhs.b;
  this->p = (int*) malloc(sizeof(int));
 *(this->p) = *(rhs.p);
 return (*this);
  }
 };
 int main()
 {
  Demo obj1(10,20,30);
  Demo obj2(40,50,60);
  Demo obj3(70,80,90);
  obj1=obj2=obj3;
  std::cout<<obj1.a<<std::endl;std::cout<<obj1.b<<std::endl;std::cout<<*(obj1.p)<<std::endl;
  }
  
