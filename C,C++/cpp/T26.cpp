#include<iostream>
class Demo
{ 
  public:
  int x;
  int y;
   int *p;
 Demo(int x,int y,int z)
 {
   this->x = x;
   this->y = y;
  this-> p = (int*)malloc(sizeof(int));
  *(this->p) = z;
  std::cout<< this->x<< this->y<< (this->p)<<std::endl;
 }
 Demo( const Demo & other)
 {
   this->x = other.x;
   this->y = other.y;
   this->p = (int*)malloc(sizeof(int));
  *(this->p) =*(other.p);
  //*(this->p)++;
  std::cout<< this->x << this->y << (this->p)<<std::endl;
 }
};
int main()
{
  Demo obj(10,20,30);
  Demo obj1(obj);
}

    
 
