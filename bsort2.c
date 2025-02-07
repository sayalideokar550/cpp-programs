#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,pass,a[100],t;
	printf("enter limit");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	a[i]=rand();
	for(pass=1;pass<n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]>a[i+1])
			 {
			    t=a[i];
			   a[i]=a[i+1];
			   a[i+1]=t;
		}
	}
	}
	printf("display=");
	for(i=0;i<n;i++)
	 printf("%d\t",a[i]);
}

