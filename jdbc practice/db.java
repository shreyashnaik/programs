import java.sql.*;
import java.util.*;
class A
{
	public static void main(String a[]) throws Exception
	{
  //Scanner sc = null;
Class.forName("com.mysql.cj.jdbc.Driver");
	//Connection con = null;
	try(Scanner sc=new Scanner(System.in);Connection con =DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","shreyash@123");Statement st = con.createStatement())
    { 
 	  //sc = new Scanner(System.in);
    //Class.forName("com.mysql.cj.jdbc.Driver");
    System.out.println("Hello");
	   //con =DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","shreyash@123");
     System.out.println("Enter name of database\n");
 String DBname = sc.next();
 String query = "create database "+DBname+"";
 //String query = "Drop database "+DBname+"";
 int m =st.executeUpdate(query);
 String query1="create table "+DBname+".student(username varchar(20) primary key,password varchar(20))";

 if(m>0)
 {
  System.out.println("Database created successfully\n");
   int n = st.executeUpdate(query1);
   if(n==0)
   {
    System.out.println("table created successfully\n");
   }
   else
    {System.out.println("table not created\n");}
 }
 else
 {
  System.out.println("Database not created\n");
 }
}
  catch (Exception e)
   {
    System.out.println("hii");
    System.out.println(e.toString());
   //
   }
}
}
 

/*System.out.println("Enter Username\n");    //data is already inserted into database
String Name = sc.next();
System.out.println("Enter password\n");
String Password = sc.next();
String query2 = "select count(*) from "+DBname+".student where username = '"+Name+"'and password = '"+Password+"'";
ResultSet rs = st.executeQuery(query2);
//System.out.println(count);

if(rs.next())
{
  System.out.println("verified user\n");
}else
{
	System.out.println("unauthorised user");
}
}
}
*/
