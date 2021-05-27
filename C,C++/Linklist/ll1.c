#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
};
struct node*createnode()
{                                                       //node creation
 int x;
 struct node*newnode = NULL;
 newnode = (struct node*)malloc(sizeof(struct node));
 if(newnode == NULL)
 {
  printf("Memory not allocated\n");
 }
 else
 {
  printf("Enter thr data\n");
  scanf("%d",&x);
  newnode->data = x;
  newnode->next = NULL;
 }
 return newnode;
}
void create_linklist(struct node**head)      //linklist creation
{
 struct node*newnode = NULL;
 struct node*travnode = *head;
 newnode = createnode();
 if(*head == NULL)
 { 
   *head = newnode;
 }
 else
 {
  while(travnode->next!=NULL)
  {
   travnode = travnode->next;
  }
  travnode->next = newnode;
  }
}
void display_linklist(struct node*head)          //display linklist
{
  struct node*travnode = NULL;
  travnode = head;
  printf("Your linklist is\n");
  while(travnode)
  {
  printf("%d\t",travnode->data);
  travnode = travnode->next;
  }
  printf("\n");
}
int count_node(struct node*head)             //count node
{
 int count = 0;
 while(head!=NULL)
 {
  count++;
  head = head->next;
 }
 return count;
}
void add_firstpos(struct node**head)    //insert node at first position
{
 struct node*newnode = NULL;
 newnode = createnode();
 newnode->next = *head;
 *head = newnode;
}
void add_interpos(struct node*head)      //insert node at intermediate position
{
 int new = 1;
 int choice;
 struct node*newnode = NULL;
 printf("Enter at which position you want to insert a node\n");
 scanf("%d",&choice);
 int count = count_node(head);
 if(choice>count+1)
 {
  printf("Invalid position list contains %d nodes\n",count);
 }
 else
 { 
 newnode = createnode();
 while(new!=(choice-1))
 {
 new++;
  head = head->next;
  
 }

 newnode->next = head->next ;
 head->next = newnode;
 }
}
void delete_first(struct node**head)           //delete first node
{
 struct node*newnode = *head;
 struct node*p = *head;
 *head = newnode->next;
 free(p);
}
void delete_inter(struct node*head)          //delete intermediate position
{
 int new = 1;
 int choice;
 printf("Enter position of node you want to delete\n");
 scanf("%d",&choice);
 int count = count_node(head);
 if(choice>count)
 {
  printf("Invalid position list contain %d nodes\n",count);
 }
 else
 {
 while(new!=(choice-1))
 {
  new++;
  head = head->next;
 }
 struct node*ptr1 = head->next;
 head->next = head->next->next;
 free(ptr1);
 }
 
 }
void delete_last(struct node*head)       //delete last node
{
 while(head->next->next!=NULL)
 {
  head = head->next;
 }
 head->next = NULL;
}
void main()
{
 struct node*first = NULL;
 int choice;
 do                                             //menu
 {
  printf("1 . Create linklist\n");
  printf("2 . Display linklist\n");
  printf("3 . Insert at first\n");
  printf("4 . Insert node at intermediate position\n");
  printf("5 . Delete first node\n");
  printf("6 . Delete intermediate node\n");
  printf("7 . Delete last node\n");
  printf("8 . Exit\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {     
   case 1: create_linklist(&first);
           break;
   case 2: display_linklist(first);
           break;
   case 3: add_firstpos(&first);
           break;
   case 4: add_interpos(first);
           break;
   case 5: delete_first(&first);
           break;
   case 6: delete_inter(first);
           break;
   case 7: delete_last(first);
           break;
  }
 }while(choice!=8);
 
}
