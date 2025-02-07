#include<stdio.h>
int main()
{
	int a[100],n,i,p;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter positon");
	scanf("%d",&p);
	printf("enter number to insert");
	scanf("%d",&p);
	for(i=p;i<n;i++)
	{
		a[i]=a[i+1];
    }
  n=n-1;
		printf("array=");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		 } 	
}
