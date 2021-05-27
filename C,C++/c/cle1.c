# include<stdio.h>
# include<stdlib.h>
//*********************
struct node
{
 int data;
 struct node * next;       //structure declaration
};

//**********************
struct node* createnode()   //node creation
{
 struct node* newnode = NULL;
 newnode = (struct node*)malloc(sizeof(struct node));
 if(newnode == NULL)
 {
  printf("oops, Memory not allocated\n");
  return NULL;
 }
 else
 {
  int data;
  printf("Enter the data\n");
  scanf("%d",&data);
  newnode->data = data;
  newnode->next = NULL;
  return newnode;
 }
}
//*************************************
void create_Clinklist(struct node ** head)
{
 struct node* newnode = NULL;                //create circular linklist
 struct node * travnode = *head;
 newnode = createnode();
 if(*head == NULL)
 {
  *head = newnode;
  newnode->next =*head;
 }
 else
 {
  while(travnode->next!=*head)
   {
    travnode = travnode->next;
   }
   travnode->next = newnode;
   newnode->next = *head;
 }
}
//**************************************
void display_Clinklist(struct node*head)
{
 struct node* stand = head;
 if(head ==NULL)
 {
  printf("No Linklist to display\n");
 }
 else
 {
   do
   {
    printf("%d->",head->data);                 //display circular linklist
    head = head->next;
   } while(head->next!=stand->next);
 }
}
//**************************
int main()
{
 int choice;
 struct node* first = NULL;
 do
 {
  printf("Create circular link list\n");
  printf("Display circular link list\n");
  printf("********************\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
   {
    case 1 : create_Clinklist(&first);
             break;
    case 2 : display_Clinklist(first);
             break;
   }
 }while(choice<3);
}
