#include<iostream>
class Demo
{
	int a;
public:
	Demo()
	{
	 int a =10;
	}
	void fun()const
	{
		std::cout<<"function"<<std::endl;
	}
};
int main()
{
	const Demo d;
	d.fun();
}