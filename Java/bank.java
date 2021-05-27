 import java.util.*;
 class Bank
 {
   private double balance=0;
   public double set_bal(double x)
   {
   	 double balance = x;
   	 return balance;
   }
   public double get_bal()
   {
   	double bal = balance;
   	return bal;
   }
   public void dep_amt(double x)
   {
   	 double depo = x;
   	 balance= balance + depo;
   	 System.out.println("Amount deposited successfully");
   }  
   public void withdraw_amt(double x)
   {
   	 double withdraw = x;
   	 balance = balance - withdraw;
   }
   public void calculate_interest(double balance ,double duration)
   {
      double rate =12;
      balance = balance +(duration*(100/rate));
      set_bal(balance);
   }

 }
 class Cust
 {
 public static void main(String a[])
 {

   double deposit,withdraw,balance,duration;
   int choice;
   Scanner sc = new Scanner(System.in);
   Bank obj = new Bank();
   do
   {
   System.out.println("1.Check balance\n"+"2.Deposit amount\n"+"3.Withdraw amount\n"+"4.Exit\n"+"4.interest"+"ENTER YOUR CHOICE :->");
   choice = sc.nextInt();
   switch(choice)
   {
   	case 1: balance = obj.get_bal();
   	        System.out.println("Your balance is "+ balance);
   	        
   	        break;
   	case 2: System.out.println("Enter amount to deposit ");
   	        deposit = sc.nextDouble();
            obj.dep_amt(deposit);
            break;
    case 3: System.out.println("Enter amount to withdraw ");
            withdraw = sc.nextDouble();
            obj.withdraw_amt(withdraw);
            break;
    case 4: System.out.println("Enter duration (in month)");
            duration = sc.nextDouble();
            obj.calculate_interest(obj.get_bal(),duration); 
   }
 }while(choice!=5);
 }
}