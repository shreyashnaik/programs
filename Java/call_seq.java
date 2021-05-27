/*
   // for non static filds and non static method/block
class parent
{
	int a = fun1();
	parent()
	{
	System.out.println("parent => constructor");
	}
	{
	System.out.println("parent => non static block");
	}
	int fun1()
	{
	 System.out.println("parent => Function");
	 return 1;
	}
}
class child extends parent
{
	int b = fun2();
	child()
	{
     System.out.println("child => constructor");
	}
	{
	System.out.println("child => non static block");
	}
	int fun2()
	{
	System.out.println("child => Function");
	return 1;
	}
	public static void main(String args[])
	{
	child obj = new child();
	}
}*/

 
   // for static fields and static methods/block
/*
class Parent
{
	static int a = fun1();
	static
	{
		System.out.println("Parent static block");
	}
	static int fun1()
	{
		System.out.println("parent => static function");
		return 1;
	}
}
class Child extends Parent
{
	static int b = fun2();
	static
	{
	 System.out.println("child => static block");
	}
	static int fun2()
    {
    	System.out.println("child => static function");
    	return 1;
    }
    public static void main(String args[])
    {

    }
}
*/
/*
  //method Hiding
class Parent
{
	static void fun()
	{
		System.out.println("Parent => function");
	}
}
class Child extends Parent
{
	static void fun()
	{
		System.out.println("Child => function");
	}
	public static void main(String args[])
	{
        Parent obj = new Child();
        Child obj1 = new Child();
        obj.fun();
        obj1.fun();
	}
}
*/

class Employee
{
  private int salary=1000;
  int getSal()
  {
  	return this.salary;
  }
  int calSal()
  {
  	return this.salary; 
  }
}
class Manager extends Employee
{
	private int bonus = 100;
	int calSal()
	{
		int salary = this.getSal()+this.bonus;
		return salary;
	}
}
class Salsman extends Employee
{
	private int insentive=50;
	int calSal()
	{
		int salary = this.getSal()+this.insentive;
		return salary;
	}
}
class Calculate
{
	
   
	void calculate()
	{
		 Employee arr[] = new Employee[3];
	     arr[0] = new Employee();
		 arr[1] = new Manager();
		 arr[2] = new Salsman();
		for(int i=0;i<arr.length;i++)
		{
			System.out.println("salary ="+arr[i].calSal());
		}
	}
	public static void main(String args[])
	{
		Calculate obj = new Calculate();
		obj.calculate();
	}
}