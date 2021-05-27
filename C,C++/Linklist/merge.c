#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
};
struct node*createnode()             
{
 int data;
 struct node*newnode = NULL;
 newnode = (struct node*)malloc(sizeof(struct node));
 if(newnode == NULL)
 {
 printf("Memory not allocated\n");
 return NULL;
 }
 else
 {
  printf("Enter the data\n");
  scanf("%d",&data);
  newnode->data = data;
  newnode->next = NULL;
  return newnode;
 }
}
struct node*mcreatenode(struct node*head)             
{
 int data;
 struct node*newnode = NULL;
 newnode = (struct node*)malloc(sizeof(struct node));
 if(newnode == NULL)
 {
 printf("Memory not allocated\n");
 return NULL;
 }
 else
 {
  //printf("Enter the data\n");
  //scanf("%d",&data);
  newnode->data = head->data;
  newnode->next = NULL;
  return newnode;
 }
}
 
void create_linklist(struct node**head)          
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

int countnode(struct node*head)        
{
  int count = 0;
  while(head!=NULL)
  {
   count++;
   head = head->next;
  }
  return count;
}

void display_linklist(struct node*head)
{
  while(head)
  {
   printf("%d\t",head->data);
   head = head->next;
   }
   printf("\n");
}
void create_mlist(struct node**head,struct node**headm)          
{
  struct node*newnode = NULL;
  struct node*travnode = *head;
  newnode = mcreatenode(*headm);
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

void merge_list(struct node**head,struct node**head1,struct node**head2)
{ 
  struct node*t1 = *head1;
  struct node*t2 = *head2;
  int count1=0,count2=0,merge =0;
  count1 = countnode(*head1);
  count2 = countnode(*head2);
  merge = count1+count2;
  for(int i=1;i<=count1;i++)
  {
    create_mlist(head,&t1);
    t1 = t1->next;
  }
  for(int i=count1+1;i<=merge;i++)
  {
    create_mlist(head,&t2);
    t2 = t2->next;
  }
 
 } 
void main()
{
 int choice;
 struct node *first1 = NULL;
 struct node* first2 = NULL;
 struct node* first = NULL;
 do
 {
  printf("1.Enter into 1st list\n");
  printf("2.Enter into 2nd list\n");
  printf("3.Display first list\n");
  printf("4.Display second list\n");
  printf("5.Merge the two lists\n");
  printf("6.Display merged list\n");
  printf("7.Exit\n");
  printf("***************************\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)

  {
   case 1: create_linklist(&first1);
            break;
   case 2: create_linklist(&first2);
            break;
   case 3: display_linklist(first1);
            break;
   case 4: display_linklist(first2);
            break;
   case 5: merge_list(&first,&first1,&first2);
           break;
   case 6: display_linklist(first);
           break;
  }
 }while(choice!=7);
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 



