#include<stdio.h>
#include<conio.h>
void display(int n,char ch)
{
      int i;
   for(i=0;i<n;i++)
     printf("%c",++ch);
  }
void main()
{
   int n;
   char ch;
    void display(int n,char ch);
    clrscr();
   printf("enter limit");
   scanf("%d",&n);
   printf("enter character");
   scanf("%s",&ch);
   display(n,ch);
   getch();
}
