#include<iostream>
#include<string.h>
class Person
{
 private:
  char name[10];
  int age;
 public:
  Person(const char * name ="",int age = 0)
  {
   strcpy(this->name , name);
   this->age = age;
  }
  const char& getName()
  {
   return *this->name;
  }
  int getAge()
  {
   return this->age;
  }
  void display()
  {
   std::cout<<"Name:- "<<this->name<<std::endl<<"Age:- "<<this ->age<<std::endl;
 }
};
class Employee : public Person
{
private:
 int id;
 int sal;
public:
 Employee(const char*name="",int age = 0,int id=0,int sal=0):Person(name,age)
 {
  this->id =id;
  this->sal = sal;
 }
 int getId()
 {
  return this->id;
 }
 int getSalary()
 {
  return sal;
 }
 void display()
 {
  Person::display();
  std::cout<<"ID:- "<<this->id<<std::endl<<"Salary:- "<<this->sal;
 }
};
int main()
{
 //Employee obj;
 Employee obj("Shreyash",20,3208,45000);
 obj.display();
}
 















