# include<stdio.h>
# include<stdlib.h>
struct BST
{
struct BST*left;
int data;
struct BST*right;
};
struct BST*createnode()
{
int data;
struct BST* newnode = NULL;
newnode = (struct BST*)malloc(sizeof(struct BST));
if(newnode == NULL)
{
 printf("Memory not allocated\n");
 return NULL;
}
else
{
 printf("Enter data: ");
 scanf("%d",&data);
 newnode->data = data;
 newnode->left = NULL;
 newnode->right = NULL;
 return newnode;
}

}
void create_BST(struct BST**root,struct BST*newnode)
{
 //struct BST* newnode = NULL;
// newnode = createnode();
 if(*root == NULL)
 {
  *root = newnode;
  
 }
 else{
  struct BST *tempnode = *root;
  //while(tempnode!=NULL)
  //{
    if(newnode->data < tempnode->data)
    {
       if(tempnode->left == NULL)
        {
          tempnode->left = newnode;
         // tempnode = newnode;
          
        }
       else
       {
    
       // tempnode = tempnode->left;
         create_BST(&tempnode->left,newnode);
       }
    }
   else
    { 
      if(tempnode->right == NULL)
      {
        tempnode->right = newnode;
       // tempnode = newnode;
       // break;
      }
      else
      {
    
      
       create_BST(&tempnode->right,newnode);
      }
    }
 }
//}
}
void display_BST(struct BST*root)
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
 struct BST* root = NULL;
  struct BST* newnode = NULL;
  int choice;
 do
 {  
   printf("1.Create Binary search tree\n2.Display Binary sarch tree\n3.Display binary search tree\n0.Exit\n***************\n");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
             newnode = createnode();
           
          create_BST(&root,newnode);
          break;
    case 2: display_BST(root);
         break;
    }
 }while(choice!=0);
}
