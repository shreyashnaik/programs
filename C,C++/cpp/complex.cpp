#include<iostream>
using namespace std;

class complex
{
public:
float real,img;

complex()
{
this->real=0;
this->img=0;
}

void display()
{

cout<<this->real<<"+"<<this->img<<"i"<<endl;
}

void getdata()
{
cout<<"enter real and img nos."<<endl;
cin>>this->real>>this->img;
}

complex operator+(complex &x)
{
complex c4;
cout<<"the addition of two complex nos. is"<<endl;
c4.real= this->real + x.real;
c4.img = this->img + x.img;
return c4;
}


complex operator-(complex &y)
{
complex c5;
cout<<"the Subtraction of two complex nos. is"<<endl;
c5.real= this->real - y.real;
c5.img = this->img - y.img;
return c5;
}

complex operator*(complex &z)
{
complex c6;
cout<<"the multiplication of two complex nos. is"<<endl;
c6.real= this->real * z.real - this->img * z.img;
c6.img = this->real * z.img + this->img * z.real;
return c6;
}



complex operator/(complex &a)
{
complex c7;
cout<<"the division of two complex nos. is"<<endl;


c7.real= this->real * a.real + this->img * a.img;
c7.img = this->real * -(a.img) + this->img * a.real;
float p =((this->real)*(this->real) + (this->img)*(this->img));
c7.real= c7.real/p;
c7.img= c7.img/p;
return c7;
}
};


int main()
{
complex c1,c2,c3;
c2.display();
c3.display();

c2.getdata();
c3.getdata();

c2.display();
c3.display();

c1 = c2+c3;
c1.display();

c1 = c2-c3;
c1.display();

c1=c2*c3;
c1.display();

c1 = c2/c3;
c1.display();
return 0;

}


