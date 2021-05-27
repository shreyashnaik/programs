import java.io.*;
class Demo
{
	public static void main(String args[])
	{
	 String name;
	 String password;
	 System.out.println("Enter name ");
	 String c = System.console().readLine();
	/* char s[] = System.console().readPassword();
	 System.out.println("name ="+c);
	 for(int i=0;i<s.length;i++)
	 {
	 	System.out.print(s[i]);
	 }*/
	 System.out.println( System.console().readPassword());
     

    }

}