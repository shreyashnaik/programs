import java.util.*;
class aba
{
	public static void main(String args[])
	{
		try(Scanner sc=null/*new Scanner(System.in)*/)
		{  
			int x= 10;
			int y=sc.nextInt();
			int c = x/y;
		}
		catch(ArithmeticException ae)
		{
			System.out.println(ae.toString());
		}
		catch(NullPointerException np)
		{
			System.out.println(np);
		}
		
		//catch (NumberFormatException | ArithmeticException ex | NullPointerException np)
		/*catch(ArrayIndexOutOfBoundsException | ArithmeticException | NullPointerException np )
		{
			System.out.println(np.toString());
		}*/
	}
}