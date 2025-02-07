#include<stdio.h>
#include<stdlib.h>
int main()
{struct student
	{
	char sname[20];
	int sno,age;
}a[100],t;
     int n,i,pass;
     FILE *f1;
	  f1=fopen("student.txt","r");
	  if(f1==NULL)
	  {
	  	printf("file not found.....");
	  	exit (0);
	  }
	  i=0;
	  while(!feof(f1))
	  {
	  	fscanf(f1,"%d%s%d",&a[i].sno,&a[i].sname,&a[i].age);
	  	i++;
	  }
	  n=i;
	
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i].age>a[i+1].age)
			 {
			    t=a[i];
			   a[i]=a[i+1];
			  a[i+1]=t;
		}
	}
	}
	printf("display=");
	for(i=0;i<n;i++)
	 printf("\n%d\t%s\t%d\t",a[i].sno,a[i].sname,a[i].age);
}

