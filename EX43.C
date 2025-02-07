#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,n,ch,t;
clrscr();
printf("enter two number");
scanf("%d%d",&x,&y);
printf("\n1equalily \n2less than \n3quotient and remainder");
printf("enetr choise");
scanf("%d",&ch);
switch(ch)
{
case 1: if(x==y)
       peintf("x and y are equal");

       else
       printf("x and y are not equal");
       break;
case 2: if(x<y)
       printf("x is less than y");
       else
       printf("x is greater than y")
	break;
case 3: printf("\nquotient=%d",x/y);
	printf("\nremainder=%d",y/10);
	break;
	getch();
	return 0;
	}
	 }