//**************************** DATA OF STUDENTS BY USING LINKLIST*********************************

# include<stdio.h>
# include<stdlib.h>
#include<string.h>


//***********************************
struct node
{
 int roll_no;
 char name1[10];
 //char*cla;
 struct node*next;
};
//**********************************
struct node*createnode()
{
  int roll;
  char name[10],cla[2];
  struct node* newnode = NULL;
  newnode = (struct node*)malloc(sizeof(struct node));
  if(newnode == NULL)
  {
   printf("MEMORY NOT ALLOCATED\n");
   return NULL;
  }
  else
  {
     
    printf("ENTER ROLL NO OF STUDENT\n");
    scanf("%d",&roll);
    newnode->roll_no = roll;
    printf("ENTER THE NAME OF STUDENT\n");
    fgets(name,sizeof(name),stdin);
    for(int i=0;name[i]!='\0';i++)
     {
      newnode->name1[i] = name[i];
      }
    
 //  printf("ENTER THE CLASS OF STUDENT\n");
   
    newnode->next = NULL;
    return newnode;
    
  }
}
void create_linklist(struct node **head)
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
void display_data(struct node*head)
 {
  while(head!=NULL)
   {
    printf(" ROLL NO : %d ",head->roll_no);
    printf(" NAME : %s\n",head->name1);
    printf("\n");
    head = head->next;
   }
   
  
}
   
    
   
   
void main()
{
 struct node * first = NULL;
 int choice;
 do
 {
  printf("1 . ENTER THE STUDENT DATA\n");
  printf("2 . DISPLAY THE DATA\n");
  printf("3 . EXIT\n");
  printf("*******************************\n");
  printf("ENTER YOUR CHOICE\n");
  scanf("%d",&choice);
  switch(choice)
   {
    case 1 : create_linklist(&first);
             break;
    case 2 : display_data(first);
            break;
   }
  }while(choice!=4);
}
                
