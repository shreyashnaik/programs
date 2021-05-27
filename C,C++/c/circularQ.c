# include<stdio.h>
# define MAX 5
struct C_Queue
{
 int arr[MAX];
 int front;
 int rear;
};
//**************************************************
int IS_Empty(struct C_Queue*Q_ptr)
{ printf("heyy");
 if(Q_ptr->front ==-1 && Q_ptr->rear == -1)
 {

  Q_ptr->front =Q_ptr->rear = -1;
  printf("Queue is Empty");
  return 0;                          
 }
 else return 1;
}
//*************************************************
int IS_Full(struct C_Queue*Q_ptr)
{
 Q_ptr->rear++;
 if(Q_ptr->rear%MAX == Q_ptr->front)
 {
 printf("Queue if Full\n");
 return 1;
 }
 else
 return 0;

}
//*********************************
void Insert(struct C_Queue*Q_ptr)
{
  int data;
  if(Q_ptr->rear == -1)
  {
   Q_ptr->rear = Q_ptr->front = 0;
   printf("Please enter the data\n");
   scanf("%d",&data);
   Q_ptr->arr[Q_ptr->rear%MAX] = data;
  } 
  else
  {Q_ptr->rear++;
     printf("Please enter the data\n");
   scanf("%d",&data);
   Q_ptr->arr[Q_ptr->rear%MAX] = data;
  }

}
//********************************************
void Delete(struct C_Queue*Q_ptr)
{
  if(IS_Empty(Q_ptr))
  {   if(Q_ptr->front == Q_ptr->rear%MAX)
   {
   printf("%d is deleted\n",Q_ptr->arr[Q_ptr->front]);
   Q_ptr->front = Q_ptr->rear =-1;
   return;
   }
   printf("%d is deleted\n",Q_ptr->arr[Q_ptr->front]);
   Q_ptr->front++;

  }
}
//***************************************************
void Display(struct C_Queue*Q_ptr)
{
 for(int i=Q_ptr->front;i<=Q_ptr->rear%MAX;i++)
 {
  printf("%d ",Q_ptr->arr[i]);
 }
 printf("\n");
}
//**************************************************
void main()
{
 struct C_Queue Q_obj;
 Q_obj.front = Q_obj.rear = -1;
 int choice;
 do
 {
 printf("1.Check Empty\n2.Check Full\n3.Insert\n4.Delete\n5.Display\n*************\nEnter your choice\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: IS_Empty(&Q_obj);
          break;
  case 2: IS_Full(&Q_obj);
          break;
  case 3: Insert(&Q_obj);
          break;
  case 4: Delete(&Q_obj);
          break;
  case 5: Display(&Q_obj);
          break;
 } 
}while(choice!=0);
}
