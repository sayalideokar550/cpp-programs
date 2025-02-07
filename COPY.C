#include<stdio.h>
#include<conio.h>
int main()
{
struct student
{
  int sno;
  char sname[20];
  int per;
}s1[100];
 FILE *f1;
 char ch;
 int n,i;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("enter no,name,per");
    scanf("%d%s%d",&s1[i].sno,&s1[i].sname,&s1[i].per);
 }
  f1=fopen("student.txt","w");
 // if(s1[i]==NULL)
 // {
 // printf("file not found");
//  getch();
//  exit(0);
//  }
 for(i=0;i<n;i++)
  {
   scanf("%c",&s1[i]);
   fprintf(f1,"%c",s1[i]);
  }
 fcloseall();
 printf("zal");
 getch();

}