#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

struct node* createnode()
{
struct node* newnode=NULL;
int x;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
printf("Memory has not allocated\n");
else
{
printf("Enter the data=>\n");
scanf("%d",&x);
newnode->data=x;
newnode->next=NULL;
}
return newnode;
}
void createlinkedlist(struct node** head)
{
int n;
printf("How many nodes u want to insert?\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
struct node* newnode=NULL;
struct node* travnode=*head;
newnode=createnode();
if(*head==NULL)
{
*head=newnode;
}
else
{
while(travnode->next!=NULL)
{
travnode=travnode->next;
}
travnode->next=newnode;
}
}
}

void displaylinkedlist(struct node* head)
{
printf("Your Prepared linked list =>\n");
if(head==NULL)
{
printf("sorry!!Linked list is not created yet\n");
}
else
{
while(head!=NULL)
{
printf("%d",head->data);
printf("\t");
head=head->next;
}
}
}
int count(struct node* head1)
{
int count=0;
while(head1!=NULL)
{
++count;
head1=head1->next;
}
return count;
}
void insertFirst(struct node** head)
{
struct node* newnode=NULL;
newnode=createnode();
newnode->next=*head;
*head=newnode;
}

void insertLast(struct node** head)
{
struct node* travnode=*head;
struct node* newnode=NULL;
newnode=createnode();
while(travnode->next!=NULL)
{
travnode=travnode->next;
}
travnode->next=newnode;
}
void insertAtPosition(struct node ** head)
{
int count1;
count1 = count(*head);
int pos;
printf("At which position u want to insert node?\n");
scanf("%d",&pos);
if(pos==1)
{
insertFirst(head);
}
else if(pos==(count1+1))
{
insertLast(head);
}
else if(pos<1||pos>(count1+1))
{
 printf("Please,enter valid position!");
 insertAtPosition(head);
}
else
{
struct node* travnode=*head;
struct node* newnode=NULL;
newnode=createnode();
for(int i=1;i<(pos-1);i++)
{
travnode=travnode->next;
}
newnode->next=travnode->next;
travnode->next=newnode;
}
}




void main()
{
struct node* first=NULL;
int choice;
do
{
printf("What you want to do?\n1.Create linked list\n2.inserting node at given position\n3.Display linkedlist\n4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
createlinkedlist(&first);
break;
case 2:
insertAtPosition(&first);
break;
case 3:
displaylinkedlist(first);
break;
case 4:
return;
}
}while(1);
}
