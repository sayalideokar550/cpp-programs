#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
clrscr();
printf("enter character");
scanf("%c",&ch);
printf("\nenter%c",ch);
printf("\nnext charcter %c",ch-1);
printf("\nprevoius character%c",ch);
getch();
return 0;
}