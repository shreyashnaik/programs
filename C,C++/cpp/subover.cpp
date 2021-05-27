# include<iostream>
class Demo
{
 public:
 int length;
 int*p;
 Demo(int length)
 {
  this->length = length;
  this->p = (int*)malloc(sizeof(int)*this->length);
 }
 int& operator[](int index)
 {
  if(index >= 0 && index < this->length)
   {
     return ((this->p)[index]);
   }
   else
   {
    std::cout<<"invalid"<<std::endl;
   }
  }
 };
  int main()
  {
   Demo d(5);
   d[1] = 20;
   d[1]++;
   std::cout<<d[1];
   
  }
  
