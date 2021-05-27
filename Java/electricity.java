import java.util.*;
class Bill
{

	public static void main(String args[])
	{
		int meter_rate = 150;
		int reading,payable_amt;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter NUmber of units");  
        reading = sc.nextInt();
        if(reading>=0 && reading<=100)
        {
        	System.out.print("Your payable amount is = $"+(meter_rate+3*reading));
        }
        else if(reading>100 && reading<=200)
        {

        	System.out.println("Your payable amount is = $"+(meter_rate+(100*3)+(reading-100)*5));
        }
        else if(reading>200 && reading<=300)
        {
        	System.out.println("Your payable amount is = $"+(meter_rate+(300+500)+(reading-200)*7));
        }
        else{
        	System.out.println("Your payable amount is= $"+(meter_rate+(300+500+700)+(reading-300)*10));

        }


	}
}