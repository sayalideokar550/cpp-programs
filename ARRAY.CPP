#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i;
clrscr();
printf("enter five number");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("display=");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}