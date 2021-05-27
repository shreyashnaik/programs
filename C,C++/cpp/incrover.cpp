# include<iostream>
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
  Demo& operator++()
  {
    (this->a)++;
    (this->b)++;
    return(*this);
  }
  Demo  operator++(int x)
  {
   Demo var = *this;
   (this->a)++;
   (this->b)++;
   return var;
  }
  friend std::ostream& operator<<(std::ostream& , Demo&);
 };
 std::ostream& operator<<(std::ostream& out , Demo& rhs)
 {
  out<< rhs.a <<"\t";
  out<< rhs.b <<"\t";
  return out;
 }
 int main()
 {
   Demo obj (10,20);
   Demo obj1 = ++obj;
   Demo obj2  = obj++;
  std::cout<<obj<<std::endl<<obj1<<std::endl<<obj2;
  return 0;
 }
 
 
 
 
 
