#include<iostream>
class Demo
{
private:
  int a;
  int b;
 public:
 /*Demo(int a,int b)
  {
   this->a = a;
   this->b = b;
  }*/
  
  friend std::ostream& operator<<(std::ostream& , Demo&);
  friend std::istream& operator>>(std::istream& , Demo&);
 }; 
 std::ostream& operator<<(std::ostream& out , Demo& rhs)
 {
  out<< rhs.a <<"\t";
  out<< rhs.b <<"\t";
 }
 std::istream& operator>>(std::istream& in , Demo& rhs)
 {
  in>>rhs.a ;
  in>>rhs.b ;
 }
int main()
{
 Demo obj1;
 Demo obj2;
 std::cin>>obj1;std::cin>>obj2;
 std::cout<<obj1<<std::endl<<obj2;
 
 }
 
