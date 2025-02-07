#define MAX 5
struct stack
{
	int a[MAX];
	int top;
}*s;
  void init()
  {
	s->top=-1;
  }
int isempty()
{
   if(s->top==-1)
      return 1;
	else
	  return 0;
   }
 int isfull()
 {
	if(s->top==MAX-1)
	  return 1;
	 else
	  return 0;
	}
void push(int num)
{
	if(isfull())
	{
	   printf("full zal");
	}
	else
	 {
		s->top++;
		s->a[s->top]=num;
		printf("\n push succ...........");
	 }
	}
	 void pop()
	  {
		int val;
		if(isempty())
		{
			printf("empty zaly");
		  }
		  else
		  {
			val=s->a[s->top];
			s->top--;
			printf("\npoped value=%d",val);
		  }
	  }
	  void disp()
	 {
		int i;
		for(i=s->top;i>=0;i--)
		  {
			printf("%d\n",s->a[i]);
		  }
	  }
	  void sort()
	  {
	     int i,t;
	     for(i=s->top;i>=0;i--)
	     {
		  if(s->a[i]>s->a[i+1])
		    {
		    t=s->a[i];
		    s->a[i]=s->a[i+1];
		    s->a[i+1]=t;
	  }

	     for(i=s->top;i>=0;i--)
	     {
		 printf("%d\n",s->a[i]);
	      }
	  }
	  int main()
	  {
		int ch,num;
		clrscr();
		init();
		do
		{
			printf("\n1-push \n2-pop \n 3-disp\n");
			printf("\n enter choice");
			scanf("%d",&ch);
			 switch(ch)
			 {
				case 1:printf("enter number:");
				       scanf("%d",&num);
				       push(num);
				       break;
				case 2:pop();
				       break;
				case 3:disp();
				       break;
				case 4:sort();
				       break;
				default:printf("\n invalid choice");
					  break;
			   }
		  }while(ch<5);
		getch();
	  }
}