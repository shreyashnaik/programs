// valid email;

#include<iostream>
void check_Email(char mail[])
{
 int count =0;
 for(int i=0;mail[i]!='\n';i++)
 {
  if(mail[i] == '@' || mail[i] == '.')
  {
   count++;
  }
  else if(mail[i]<97 || mail[i]>122)
  {
    std::cout<<"Invalid Email"<<std::endl;
    break;
  } 
 }
 if(count == 2)
  {
   std::cout<<"Valid Email"<<std::endl;
  }else
  std::cout<<"Invalid Email"<<std::endl;
}
int main()
{
 char mail[20];
 std::cout<<"Enter your Email ID:=>";
 fgets(mail,sizeof(mail),stdin);
 check_Email(mail);
 return 0;
}

//power of any no
#include<iostream>
int main()
{
int number,number1,power,sum=0;
std::cout<<"Enter the number and which power you want"<<std::endl;
std::cin>>number>>power;
number1 = number;
for(int i =0;i<power-1;i++)
{
 number = number*number1;
}
std::cout<<"power = "<<number;

return 0;
}


//convert days into years week days

#include<iostream>
int main()
{
int days,years,weeks,day;
std::cout<<"Enter total number of days=>";
std::cin>>days;
years = days/365;
weeks = (days%365)/7;
day = days -(365*years+7*weeks);
std::cout<<"Years = "<<years<<std::endl<<"weeks = "<<weeks<<std::endl<<"days= "<<day<<std::endl;
return 0;
}


// last occurance of number

# include<iostream>
int main()
{
int arr[10];
int count,last_occurance,choice;
std::cout<<"Enter total no of elements in array= ";
std::cin>>count;
std::cout<<"Enter array elements = ";
for(int i=0;i<count;i++)
{
 std::cin>>arr[i];
}
std::cout<<"Enter number to search= ";
std::cin>>choice;
for(int i=0;i<count;i++)
{
 if(arr[i] == choice)
 {
  last_occurance =i;
 } 
}
std::cout<<"Number "<<choice<<" last occurance = "<<last_occurance<<std::endl; 
return 0;
}




//to check number is fibonacci
#include<iostream>
int main()
{
 int check,t1=0,t2=1,next_term,flag=0;
 std::cout<<"Enter the number to check: ";
 std::cin>>check;
 for(int i=1;i<=check;i++)
 {
  if(t1>check)
  {
  break;
  }
  if(t1 == check)
  {
   flag =1;
   std::cout<<"The given number is Fibonacci number"<<std::endl;
   break;
  }
  next_term = t1+t2;
  t1 = t2;
  t2 = next_term;
 }
 if(flag==0)
 {
 std::cout<<"The given number is not Fibonacci number"<<std::endl;
 }
 
 
 return 0;
}
