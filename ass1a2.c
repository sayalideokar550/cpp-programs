#include<stdio.h>
int main()
{
	int a[20],b[20],n,i;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array element:");
	  for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
    for(i=0;i<n;i++)
	{
	    b[i]=a[i]*a[i];	
	}	    
	printf("origanal array=");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);	
	}    
	printf("squar array=");
	for(i=0;i<n;i++)
	{
	    printf("%d ",b[i]);	
	}    
}
