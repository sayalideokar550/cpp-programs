#include<stdio.h>
#include<stdlib.h>
 struct node
 {
   int data;
   struct node *next,*prev;
 };
  struct node *create(struct node * head)
  {
  	struct node * newnode,* temp;
  	int i,n;
  	printf("enter limit");
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	{
  		newnode=(struct node *)malloc(sizeof(struct node));
  		  printf("enter value");
  		  scanf("%d",&newnode->data);
  		  newnode->next=NULL;
  		   if(head==NULL)
  		   {
  		   	  head=temp=newnode; 		   	  
			 }
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
			 }	 
	  }
  	return head;
  }
  void disp(struct node *head)
{
  struct node *temp=head;
  while(temp!=NULL)
  {
   printf("%d\t",temp->data);
   temp=temp->next;
  }
}
struct node * delmid(struct node *head,int pos)
{
	struct node *temp,*temp1;
	int i;
	 
	   for(i=1,temp=head;i<(pos-1)&&temp!=NULL;i++,temp=temp->next);
	       temp1=temp->next;
         	temp->next=temp1->next;
			 temp1->next->prev=temp;   
	    free(temp1);
         return head;
}
  int main()
  {
  	int num,pos;
  	struct node * head=NULL;
  	  head=create(head);
  	   printf("display list="); 	  
  	  disp(head);
  	  printf("enter position");
  	  scanf("%d",&pos);
  	  head=delmid(head,pos);
  	  printf("display list="); 	  
  	  disp(head);
  	  
  }
