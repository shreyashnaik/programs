
//***********************************************************************
//Prime numbers within range

# include <iostream>
int main()
{
 for(int i=1;i<100;i++)
 {
   int flag =0;
   for(int j=1;j<i;j++)
    { 
      if(j==1)
      {
       continue;
      }
     if(i%j==0)
     {
      flag =1;
      break;
     }
   }
  if(flag == 0)
  {
    std::cout<<" "<<i;
  }
 } 
 return 0;
}
 //***********************************************************************
 
 
 
//count digits in a number

#include<iostream>

int main()
{
 int number,count=1;
 std::cout<<"Enter your number "<<std::endl;
 std::cin>>number;
 while(number/10>0)
 {
  number = number/10;
  count++;
 }
 std::cout<<"total number of digits "<<count<<std::endl;
 return 0;
}
 
 // ****************************************************************************


 // reverse a number
 
 #include<iostream>
 int main()
 {
  int number;
  std::cout<<"enter the number "<<std::endl;
  std::cin>>number;
  std::cout<<"reverse of number is "<<std::endl;
  int rev=0,rem;
  while(number>0)
  {
   rem = number%10;
   number=number/10;
   rev = rev*10+rem;
  }
  std::cout<<rev;
  return 0;
}
  
  
//*************************************************************************************
 
 //sum of digits in number
 # include<iostream>
 int main()
 {
  int number,sum=0;
  std::cout<<"enter your number "<<std::endl;
  std::cin>>number;
  //num = number;
  while(number>0)
  {
  
   sum = sum+ number%10;
   number= number/10; 
  }
  std::cout<<"sum of digits "<<sum<<std::endl;
  return 0;
 }

//**************************************************************************************


 //factorial of a number
 # include<iostream>
 int main()
 {
  int number,fact = 1;
  std::cout<<"Enter the number "<<std::endl;
  std::cin>>number;
  for(int i = number;i>0;i--)
  {
   //std::cout<<"check"<<std::endl;
   fact = fact*i;
  }
  std::cout<<"factorial is "<<fact<<std::endl;
 return 0;
}









