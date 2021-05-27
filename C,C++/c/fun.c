
//  hotel management
/*
# include<stdio.h>
  float discount(int amount)
  {
    if(amount<=500)
     {
       printf("total amount to pay = %d\t",amount);
       return amount;
     }
     else if(amount>500 && amount<1500)
           {
             amount =  amount-(amount*0.1);
             printf("total amount to pay = %d\t",amount);
             return amount;
            }
            else
             {
               amount = amount-(amount*0.15);
               printf("total amount to pay = %d",amount);
               return amount;
             }
   }
   void main()
   {
    int amount;
    printf("enter the total amount\n");
    scanf("%d",&amount);
    discount(amount);
    }
        */ 
 // tax amount
 
 #include<stdio.h>
  float itax(int income)
  { int tax;
    if(income<=500000)
     {
       printf(" no tax applied\n");
     }
      else if(income>500000 && income<=1000000)
      	{ income = income-500000;
      	 tax  = income*0.1;
       	 printf("total tax applied =%d\t",tax);
       	 return tax;
        }
        else if(income>1000000 && income<=2000000)
         { 
          tax = (income - 1000000)*0.2;
          tax = tax+50000;
          printf("total tax applied =%d\t",tax);
          return tax;
         }
         else
          {
           
           tax = (income - 2000000)*0.3;
          // printf("%d",tax);
           tax = 250000 +tax;
           printf("total tax applied =%d\t",tax);
           return tax;
           }
    }
    void main()
    {
     int income;
     printf("enter the income\n");
     scanf("%d",&income);
     itax(income);
    }
      
