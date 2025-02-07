#include<stdio.h>
#define MAX 5
struct queue
{
	int a[MAX];
	int front,rear;
}*q;
void intiq()
{
	q->front=q->rear=-1;
}
int isempty()
{
	if(q->front==-1||q->front>q->rear)
	  return 1;
	else
	  return 0;
}
int isfull()
{
	if(q->rear==MAX-1)
	 return 1;
	else
	 return 0;
}
void insert(int num)
{
	if(isfull())
	 {
		printf("queue is overflow");
	 }
	 else
	  {
		if(q->front==-1)
	  {
		    q->front=0;
	      }
	       q->rear++;
	      q->a[q->rear]=num;
	  printf("insert succ...");
	  }
}
void del()
{
	int val;
	if(isempty())
	 {
		printf("queue is underflow");
	 }
	 else
	 {
		val=q->a[q->front];
		 q->front++;
		 printf("dele succ..%d",val);
	 }
}
void disp()
{
	int i;
	for(i=q->front;i<=q->rear;i++)
	 {
		printf("%d\t",q->a[i]);
	 }
}
void rev()
{
    int i;
     for(i=q->rear;i>=q->front;i--)
     {
	printf("%d\t",q->a[i]);
	}
}
int main()
{
	int num,ch;
	clrscr();
	 intiq();
	do{
		printf("\n 1:insert \n 2:delete \n 3:display: \n 4rev");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter number:");
			       scanf("%d",&num);
			       insert(num);
			       break;
		    case 2:del();
			   break;
		    case 3:disp();
			   break;
		    case 4:rev();
			   break;
		    default:printf("invalid choice");
		}
	}while(ch<5);
	getch();
}
