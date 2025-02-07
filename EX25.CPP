#include<stdio.h>
#include<conio.h>
int main()
{
int l,b,h,a,v;
clrscr();
printf("enter lenth");
scanf("%d",&l);
printf("enter breath");
scanf("%d",&b);
printf("enter hight");
scanf("%d",&h);
a=2*(l*b+l*h+b*h);
v=l*b*h;
printf("\nsurface=%d",a);
printf("\nvalume=%d",v);
getch();
return 0;
}
