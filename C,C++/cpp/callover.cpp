# include<iostream>
class Demo
{
 public:
 int a;
 int b;
 Demo(int a,int b)
 {
  this->a = a;
  this->b = b;
 }
int operator()()
 {
 int sum = this->a + this->b;
 return sum;
 }
};
int main()
{
 Demo d1(10,20);
 Demo d2(30,40);
 int sum = d1();
 std::cout<<sum<<std::endl;
}




 
