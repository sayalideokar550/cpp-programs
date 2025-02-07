#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j,s=0;
clrscr();
printf("enter matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("sum=");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
s=s+a[i][j];
}
printf("%d",&s);
getch();
return 0;
}
