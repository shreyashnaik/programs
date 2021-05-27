# include<stdio.h>
# define MAX 5
struct Queue
{
 int arr [MAX];
 int front;
 int rear;
};
int IS_empty(struct Queue*Q_ptr)
{
  if(Q_ptr->front > Q_ptr->rear)
  { 
    Q_ptr->front = -1;
    Q_ptr->rear = -1;
    printf("Queue is empty\n"); 
    return 0;
   }
   else 
      return 1;
}
int IS_full(struct Queue*Q_ptr)
{
  if(Q_ptr->rear == MAX-1)
  {
   printf("Queue is Full\n");
   return 0;
  }
  else
   printf("There is space in Queue\n");
   return 1;
}
void Enqueue(struct Queue*Q_ptr)
{ 
 int data;
  if(IS_full(Q_ptr))
  {
    printf("Enter the data => ");
    scanf("%d",&data);
    if(Q_ptr->front ==-1)
    {
     (Q_ptr->front)++;
    (Q_ptr->rear)++;
    Q_ptr->arr[Q_ptr->rear] = data;
    }
    else
    {
       (Q_ptr->rear)++;
       Q_ptr->arr[Q_ptr->rear] = data;
    }
  }
}
void Dequeue(struct Queue*Q_ptr)
{
  if(IS_empty(Q_ptr))
  {
   
    printf("%d is deleted \n",Q_ptr->arr[Q_ptr->front]);
     (Q_ptr->front)++;
     IS_empty(Q_ptr);
  }
}
void Display(struct Queue*Q_ptr)
{
if(IS_empty(Q_ptr))
{
 for(int i=Q_ptr->front;i<=Q_ptr->rear;i++)
 {
 printf("%d ",Q_ptr->arr[i]);
 }
 printf("\n");
}
}



   

void main()
{
 struct Queue Q_obj;
 Q_obj.front = -1;
 Q_obj.rear = -1;
 int choice;
 do
 {
  printf("1.Enqueue\n 2.Dequeue\n 3.check full\n 4.check empty\n 5.Display\n 0.EXIT\n*******************\n Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1: Enqueue(&Q_obj);
          break;
  case 2: Dequeue(&Q_obj);
          break;
  case 3: IS_full(&Q_obj);
          break;
  case 4: IS_empty(&Q_obj);
          break;
  case 5:Display(&Q_obj);
         break;
  }
}while(choice!=0);
}
