#include<stdio.h>
int main()
{
	int a[20],n,i,num,a;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array element:");
	  for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
      printf("enter number to found:");
	scanf("%d",&num);
	printf("enter number to replace:");
	scanf("%d",&a);	    
	     for(i=0;i<n;i++)
	     {
	     	if(a[i]==num)
	     	 a[i]=a;
		 }
		printf("replace array=");   
           for(i=0;i<n;i++)
		   {
		   	 printf("%d",a[i]);
			} 
}

