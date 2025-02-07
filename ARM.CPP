#include<iostream.h>
#include<conio.h>
int main()
{
int i,n;
clrscr();
cout<<"enter number";
cin>>n;
int s=0;
while(n>0)
{
   int d=n%10;
       s=s+d*d*d;
       n=n/10;


}
if(s==n)
cout<<"number is armstrong";
else
cout<<"number is not armstrong";
getch();
}






