#include<iostream>
class Demo
{
 public:
 const int x;
 int y,z;
 Demo(int a,int b,int c):x(a),y(b),z(c)
 {
 }
 
 void display()
 {
  std::cout<<x<<"\t"<<y<<"\t"<<z<<std::endl;
 }
};
int main()
{
 Demo d(10,20,30);
 d.display();
}
   
