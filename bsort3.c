#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[10][10],t[20];
	int n,i,pass;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter n city name:");
	for(i=0;i<n;i++)
      scanf("%s",&a[i]);
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(strcmp(a[i],a[i+1])>0)
			 {
			    strcpy(t,a[i]);
			   strcpy(a[i],a[i+1]);
			  strcpy(a[i+1],t);
		}
	}
	}
	printf("display=");
	for(i=0;i<n;i++)
	 printf("%s\t",a[i]);
}

