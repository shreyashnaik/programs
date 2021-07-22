import java.sql.*;
import java.util.*;
import java.text.SimpleDateFormat;
class A
{
	public static void main(String a[]) throws Exception
	{
	Scanner sc = new Scanner(System.in);
	Class.forName("com.mysql.cj.jdbc.Driver");

	Connection con = null;
	con =DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","shreyash@123");

	if(con==null)
	{
	System.out.println("conn not established");
	}
	else
	{
	System.out.println("conn established");
	}
    
    String dbname = sc.next();

    String query = "insert into "+dbname+".info values(?,?,?)";
    PreparedStatement ps = con.prepareStatement(query);
    System.out.println("Enter the values");

    int roll = sc.nextInt();
    String name = sc.next();
    String dob = sc.next();

    SimpleDateFormat sdf = new SimpleDateFormat("dd-MM-YYYY");
    java.util.Date ud = sdf.parse(dob);

    long date =ud.getDate();
    System.out.println(date);
    java.sql.Date sd = new java.sql.Date(date);
    ps.setInt(1,roll);
    ps.setString(2,name);
    ps.setDate(3,sd);
    int m = ps.executeUpdate();
 }
}