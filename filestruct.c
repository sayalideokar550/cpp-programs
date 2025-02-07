#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int rno,age;
	char name[20];
}s1[100];
 int main()
{ 
    
  FILE *f1;
  int i,n;
  f1=fopen("student.txt","r");
   if(f1==NULL)
   {
   	 printf("file not found..");
   	 exit(0);
   }
   i=0;
   while(!feof(f1))
   {
   	fscanf(f1,"%d%s%d",&s1[i].rno,&s1[i].name,&s1[i].age);
   	i++;
   }
   n=i-1;
   printf("\ndisplay records=");
     for(i=0;i<n;i++)
     printf("\n%d %s %d",s1[i].rno,s1[i].name,s1[i].age);
   
}
