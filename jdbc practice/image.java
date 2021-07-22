import java.sql.*;
import java.util.*;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.FileOutputStream;
import org.apache.commons.io.IOUtils;
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
    String query = "insert into first.id values(?,?)";
    PreparedStatement ps = con.prepareStatement(query);
    String name = sc.next();
    String path = sc.next();
    FileInputStream fis = new FileInputStream(path);
    ps.setString(1,name);
    ps.setBinaryStream(2,fis);
    int m =ps.executeUpdate();
    String q1 ="select image from first.id ";
    PreparedStatement ps1 = con.prepareStatement(q1);
   // Inputstream Is = new InputStream();
    ResultSet rs = ps1.executeQuery();
    if(rs.next())
    {
    	InputStream Is = rs.getBinaryStream(1);
    	FileOutputStream fos = new FileOutputStream("r.jpg");
    	IOUtils.copy(Is,fos);

    }
    }
} 