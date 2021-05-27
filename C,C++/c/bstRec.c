#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node* left;
struct node* right;
int data;
};
  
struct node* createnode()
{
struct node* newnode=NULL;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("Memory not allocated\n");
}
else
{
printf("Enter data:-\n");
scanf("%d",&newnode->data);
newnode-> left=NULL;
newnode->right=NULL;
}
return newnode;
}

void createBST(struct node** root,struct node* tempnode,struct node* newnode)
{
if(*root==NULL)
{
*root=newnode;
printf("0\n");
}
else
{
if((newnode->data) < (tempnode->data))
{
if(tempnode->left==NULL)
{
tempnode->left=newnode;
printf("1\n");
}
else
{
createBST(root,tempnode->left,newnode);
}
}
else
{
if(tempnode->right==NULL)
{
tempnode->right=newnode;
printf("2\n");
}
else
{
createBST(root,tempnode->right,newnode);
}
}
}
}
void display_BST(struct node*root)
{
 if(root!=NULL)
 {
  printf("%d ",root->data);
  display_BST(root->left);
  display_BST(root->right);
 }
}
void main()
{
int choice;
struct node* root=NULL;
do{
printf("Enter which operation wnt to perform\n1.createBST\n2.Display\n3.Exit\n");
scanf("%d",&choice);
struct node* newnode=NULL;
switch(choice)
{
case 1:
 newnode=createnode();
createBST(&root,root,newnode);
break;
case 2:
display_BST(root);
break;
}
}while(choice!=3);
}
