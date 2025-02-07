#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *f1;
  char city[30];
  long int code,num;
  int f=0;
  clrscr();
  f1=fopen("student.c","r");
  if(f1==NULL)
  {
     printf("file not found");
       exit(0);
  }
  printf("enter code search");
  scanf("%ld",&num);
  while(!feof(f1))
  {
    fscanf(f1,"%s%ld",&city,&code);
       if(code==num)
       {
	  f=1;
	  break;
      }
  }
     if(f==1)
       printf("number is found");
     else
	printf("number is not found");

      printf("%s\t%ld",city,code);
   fclose(f1);
   getch();
   return 0;
 }