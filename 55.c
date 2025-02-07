#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],b[100],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		  b[i]=a[i];
	}
	printf("first array elements=");
    for(i=0;i<n;i++)
    {
		  printf("\n%d\t",a[i]);
	}
   	printf("copy array elements=");
    for(i=0;i<n;i++)
    {
    	b[i]=a[i];
	}
	printf("\nsecond array =");
	  for(i=0;i<n;i++)
	  {
	  
	   printf("\n%d\t",b[i]);  	
}
}
