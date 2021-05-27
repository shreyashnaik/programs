#include<stdio.h>
#include<stdlib.h>
// ***************************
struct node
{
 int data;
 struct node*next;
};
//*****************************
struct node*createnode()             //node creation
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
//******************************
void create_linklist(struct node**head)          //createlinklist
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

int countnode(struct node*head)        //countnode;
{
  int count = 0;
  while(head!=NULL)
  {
   count++;
   head = head->next;
  }
  return count;
}
void search_data(struct node*head)
{ struct node*n = head;                                                         //search data in list
 int data,location =1;
 printf("Enter the data you are looking for\n");
 scanf("%d",&data);
 while(head)
 {
  if(head->data == data)
  {
   printf("%d found at location %d\n",data,location);
   break;
  }
  head = head->next;
  location++;
 }
 if(head == NULL)
 {
  printf("Data not in the list\n Enter again\n");
  search_data(n);
 }
}
void second_highdata(struct node**head)
{
  struct node*travnode = *head;
  struct node*max= *head;
  int max2;
  while(travnode->next!=NULL)
     {
      if(travnode->next->data > max->data)
        {  
           max2 = max->data;
           max->data= travnode->next->data;
          // max2->data = travnode->data;
        }
        
        else if(travnode->data > max2 && travnode->data < max->data)
              {
                max2 = travnode->next->data;
              }
              
       travnode = travnode->next;
   }
  printf("The 2nd highest number is %d\n",max2);
}       
     
//********************************************
void sort_evendata(struct node**head)                   // sorting
{                                                     
 int swap;
 int count = countnode(*head);
 struct node*travnode = *head;
 for(int i =0;i<count-1;i++)
  {
   for(int j=0;j<count-i-1;j++)
    {
     
      if(travnode->data >travnode->next->data && travnode->data %2 == 0 && travnode->next->data%2 == 0)
       {
        swap = travnode->next->data;
        travnode->next->data = travnode->data;
        travnode->data = swap;

       }
    travnode= travnode->next;
   }
   travnode = *head;
 } 
}
//*******************************************
void display_linklist(struct node*head)
{
  while(head)
  {
   printf("%d\t",head->data);
   head = head->next;
   }
   printf("\n");
}
void merge_linklist(struct node ** head,struct node**head1)
{ 
  int choice,choice1;
  do
   {  
    printf("Enter in  first list\n");
    create_linklist(head);
    printf("Do you want to insert more ?(y/n)\n");
      scanf("%d",&choice);
   }while(choice!=0);
  do
   {
     printf("Enter in 2nd List\n");
     create_linklist(head1);
     printf("Do you want to insert more ?(y/n)\n");
     scanf("%d",&choice1);
   }while(choice1!=0);
   printf("HII\n");
  struct node*travnode = NULL;
  travnode = *head;
  while(travnode->next=NULL)
   {
     travnode = travnode->next;
   }
   travnode->next = *head1;
}
    
//***********************************************
void main()
{
 struct node*first =NULL;
 struct node*first1 =NULL;
 int choice;
 do
 {
  printf("1. Create linklist\n");
  printf("2. Search a data in linklist\n");
  printf("3. find second highest number in list\n");
  printf("4. Sort only even data\n");
  printf("5. Display linklist\n");
  printf("6. Merging two lists\n");
  printf("***************************\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: create_linklist(&first);
            break;
    case 2: search_data(first);
            break;
    case 3: second_highdata(&first);
            break;
    case 4: sort_evendata(&first);
             break;  
    case 5: display_linklist(first);
            break;
    case 6: merge_linklist(&first,&first1);
            break;     
  }
 }while(choice!=7);
}




























