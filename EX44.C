#include<stdio.h>
#include<conio.h>
int main()
{float r,a;
int ch;
clrscr();
printf("enter redius");
scanf("%f",&r);
printf("\n 1 area of circle \n 2 circumference of circle \n 3 volume of sphere");
printf ("enter choise");
scanf("%d",&ch);
switch(ch)
{
case 1:a=3.14*r*r;
      printf("area of circle=%f",a);
      break:
case 2:a=2*3.14*r;
       printf("circumference of circle=%f",a);
       break;
case 3:a=(4/3)*3.14*r*r*r;
       printf("volume of sphere=%f",a);
       break;
       getch();
       return 0:
       }
       }
