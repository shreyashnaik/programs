# include<iostream>
class Student
{
 public:
 int age,marks;
 Student(int age,int marks)
 {
    this->age = age;
    this->marks = marks;
 }
 int operator<(Student & other)
 {
  return((this->age < other.age)&&(this->marks < other.marks));
 }
};
int main()
{
 Student s1(18,50);
 Student s2(20,55);
 if(s1<s2)
 {
  std::cout<<"s2 is larger"<<std::endl;
 }
 return 0;
}
