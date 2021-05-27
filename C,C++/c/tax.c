 #include<stdio.h>
  float itax(float income)
  { float tax,div;
    if(income<=500000)
     {
       printf(" no tax applied\n");
     }
      else if(income>500000 && income<=1000000)
      	{ income = income-500000;
      	 tax  = (income*(10/100));
       	 printf("total tax applied =%f\t",tax);
       	 return tax;
        }
        else if(income>1000000 && income<=2000000)
         { 
           div = (20/100);
          tax = ((income - 1000000)*div);
          printf("%f",tax);
          tax = tax+50000;
          printf("total tax applied =%f\t",tax);
          return tax;
         }
         else
          {income = income-500000;
           tax = income/30;
           printf("total tax applied =%f\t",tax);
           return tax;
           }
    }
    void main()
    {
     float income;
     printf("enter the income\n");
     scanf("%f",&income);
     itax(income);
    }
