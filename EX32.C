#include<stdio.h>
int main()
{
char ch;
clrscr();
printf("enter char");
scanf("%c",&ch);
if(ch>='0'&&ch<='9')
printf("\nchar is digit");
else
printf("char is not digit");
getch();
return 0;
}