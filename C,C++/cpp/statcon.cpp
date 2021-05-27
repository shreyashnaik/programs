#include<iostream>
class Demo
{
 public:
 static const int a ;
 int b =10;
 void fun()
 {
  std::cout<<"const";
  b++;
 }
};

const int Demo::a = 20;
int main()
{
  Demo d;
 d.fun();
 std::cout<< Demo::a;
}
