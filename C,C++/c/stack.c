# include<stdio.h>
# define MAX 10
struct STACK
{
 int arr[MAX];
 int top;
};
//*******************************
int ISOVERFLOW(struct STACK*stack_ptr)
{
  if(stack_ptr->arr[stack_ptr->top] == MAX-1)    // chek overflow
  {
   return 1;
  }
  else
  return 0;
}
//********************************************
 void PUSH(struct STACK * stack_ptr,int value)   //push operation 
 {
    (stack_ptr->top)++ ;
    stack_ptr->arr[stack_ptr->top] = value;
 }
//*******************************************
int ISUNDERFLOW(struct STACK* stack_ptr)         //check underflow
{
  if(stack_ptr->top == -1)
  {
    return 1;
  }
  else
  return 0;
}
//******************************************
int POP(struct STACK* stack_ptr)
{                                                         //pop operation
   int data = stack_ptr->arr[stack_ptr->top];
   (stack_ptr->top)--;
   return data;
}
//*********************************************
void display(struct STACK * stack_ptr)                // display
{
 for(int i=stack_ptr->top;i>=0;i--)
 {
   printf("%d\n",stack_ptr->arr[i]);
 }
}
//**************************************************
 

   
void main()
{
  int choice,value,pop;
  struct STACK stack_obj;
  stack_obj.top = -1;
  do
  {
   printf("1.PUSH\n2.POP\n3.DISPLAY\n4.ISUNDERFLOW\n5.ISOVERFOLW\n0.EXIT\n*****************\nPlese Enter your choice\n");
   scanf("%d",&choice);
   
   switch(choice)
   {
     case 1: if(ISOVERFLOW(&stack_obj))
              {
               printf("Stack is full ! No more space\n");
              }
              else
              {
               printf("Enter a value to push\n");
               scanf("%d",&value);
               PUSH(&stack_obj,value);
              }
              break;
              
       case 2:if(ISUNDERFLOW(&stack_obj))
               {
                printf("Stack is Empty\n");
               }
               else
               {
                pop =POP(&stack_obj);
                printf("Popped element is = %d\n",pop);
               }
               break;
        case 3: if(ISUNDERFLOW(&stack_obj))
                {
                  printf("Stack is Empty ,no elements to display\n");
                }
                else
                display(&stack_obj);
                break;
       case 4: if(ISUNDERFLOW(&stack_obj))
               {
                printf("Stack is Empty ,no elements to display\n");
               }else
               printf("%d positions are filled\n",stack_obj.top+1);
               break;
        case 5:if(ISOVERFLOW(&stack_obj))
               {
                printf("Stack is Full , no more space\n");
               }
               else
               printf("%d positions are empty\n",MAX-1-stack_obj.top);
               break;
        default: printf("please select valid input\n");
   }
 }while(choice!=0);
}
