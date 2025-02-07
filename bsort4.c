#include<stdio.h>
#include<stdlib.h>
int main()

	{
	char ename[20];
	int eno,sal;
   char s1[20];
     int n,i,pass,top,bottom,mid,f=0;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n emp info:");
	for(i=0;i<n;i++)
	 
      scanf("%d%s%d",&eno,&ename,&sal);
      printf("enter name to search");
	scanf("%s",&s1);
      top=0;
      bottom=n-1;
      mid=top+bottom/2;
	while(top<bottom)
	{
	   
      mid=(top+bottom)/2;
	  if(strcmp(ename,s1)==0)
	    {
	     f=1;
		 break;
     	}
	  if(strcmp(s1,ename[mid])>0)
	     top=mid+1;
	     else
	       bottom=mid-1;
	}
	if(f==1)
	  printf("found");
	  else
	  printf("not found");
}

