#include<stdio.h>
#include<conio.h>
int main()
{
int x1,y1,x2,y2,d;
clrscr();
printf("enter 1st point x1 y1");
scanf("%d%d",&x1,&y1);
printf("enter 2nd point x2 y2");
scanf("%d%d",&x2,&y2);

d=(x2-y1)*(x2-y1)*(y2-y1)*(y2-y1);

printf("\n distances=%d",d);
getch();
return 0;
}