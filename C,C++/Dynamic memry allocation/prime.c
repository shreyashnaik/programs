#include<stdio.h>
#include<stdlib.h>
// ***************************
struct node
{
 int data;
 struct node*next;
};
//*****************************
struct node*createnode(int a)             //node creation
{
 int data = a;
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
  newnode->data = data;
  newnode->next = NULL;
  return newnode;
 }
}
//******************************

void create_linklist(struct node**head,int a)          //createlinklist
{ 
 int pass = a;
  struct node*newnode = NULL;
  struct node*travnode = *head;
  newnode = createnode(pass);
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
//*******************************
void display_linklist(struct node*head)
{
 printf("Your linklist is \n");
 while(head!=NULL)
 {
  printf("%d\t",head->data);
  head = head->next;
 }
 printf("\n");
}
//*******************************
void main()
{
 struct node*first = NULL;
 int i =1;
 
 while(i<1000)
 {
  int a = i,flag =0;
  for(int i=1;i<a;i++)
  { 
   if(i==1)
   {
    continue;
   }
   if(a%i==0)
          {
            flag =1;
            
           }
  }
   if(flag== 0)
   { 
    
   create_linklist(&first,i);
   }
   i++;
  }
  display_linklist(first);

   
  }
   
  
  
    
