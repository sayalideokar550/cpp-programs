#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
}*root;

struct node *insert(struct node *root,int num)
{
   if(root==NULL)
   {
       root=(struct node*)malloc(sizeof(struct node));
       root->data=num;
       root->left=NULL;
       root->right=NULL;
      return root;
   }
   if(num>root->data)
   {
        root->right=insert(root->right,num);
        return root;
    }
   if(num<root->data)
   {
        root->left=insert(root->left,num);
        return root;
    }
}
void  inorder(struct node* root)
{
    if(root!=NULL)
    {
         inorder(root->left);
         printf("%d\t",root->data);
         inorder(root->right);      
    }
}
void  preorder(struct node* root)
{
    if(root!=NULL)
    {
         printf("%d\t",root->data);
         preorder(root->left);
         preorder(root->right);      
    }
}
void  postorder(struct node* root)
{
    if(root!=NULL)
    {
         postorder(root->left);
         postorder(root->right);      
       printf("%d\t",root->data);
    }
}

int main()
{
    int num,ch,n,i;
     root=NULL;
     do
     {
        printf("\n 1-insert \n 2-inorder \n 3-pre \n 4-post:");
        scanf("%d",&ch);
        switch(ch)
        {
           case 1: printf("Enter limit:");
                        scanf("%d",&n);
                         for(i=0;i<n;i++)
                         {
                             printf("Enter number:");
                             scanf("%d",&num);
                             root=insert(root,num);
                         }
                         break;
         case 2: printf("\n Inorder print:");
                      inorder(root); 
                     break;
         case 3: printf("\nPReorder :");
                      preorder(root); 
                     break;
         case 4: printf("\n Post order:");
                     postorder(root); 
                     break;
         } 
		  }while(ch<5);
}
