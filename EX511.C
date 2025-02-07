#include<stdio.h>
#include<conio.h>
int main()
{
int n,d,r=0;
printf("enter number");
scanf("%d",&n);
while (n>0)
{
d=n%10;
r=r*10+d;
n=n/10;
}
while(r>0)
{
d=r%10;
r=r/10;
switch(d)
{
case 0: printf("zero");
	 break;
case 1: printf("one");
	break;
case 2: printf("two");
	break;
case 3: printf("three");
	break;
case 4: printf("four");
	break;
case 5:printf("five");
	break;
case 6:printf("six");
	break;
case 7:printf("seven");
       break;
case 8: printf("eight");
	break;
case 9: printf("nine");
	break;
}
getch();
return 0;
}
}
