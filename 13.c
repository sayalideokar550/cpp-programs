#include<stdio.h>
#include<stdlib.h>
 struct node
 {
   int data;
   struct node *next;
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
struct node * insend(struct node *head,int num)
{
	struct node * newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	  newnode->data=num;
	  newnode->next=NULL;
	  for(temp=head;temp->next!=NULL;temp=temp->next);
	  
	  temp->next=newnode;
	  
	  return head;
}

  int main()
  {
  	struct node * head=NULL;
  	int num,i,n;
  	printf("enter number");
  	scanf("%d",&n);
  	  head=create(head);
  	  printf("enter number");
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	{
	  scanf("%d",&num);
  	   head=insend(head,num);
	}
  	  disp(head);
  	  
  }
