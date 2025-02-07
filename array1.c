#include<stdio.h>
int main()
{
	int a[10],i,n,b[100],j;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter 1 array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("square array=");
	for(i=0;i<n;i++)
	{    
	      b[j]=a[i]*a[i];
	      
		printf("%d ",b[j]);	

	}
}
