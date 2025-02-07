#include<iostream.h>
#include<conio.h>
int main()
{
int i,n,f=0,s=1,t;
clrscr();
cout<<"enter number";
cin>>n;
cout<<f<<s;
for(i=1;i<n;i++)
{
   t=f+s;
   cout<<t;
   f=s;
   s=t;


}

getch();
}






