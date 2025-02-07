#include<stdio.h>
int main()
{
	int a[20],n,i,c=0,num;
	printf("enter limit:");
	scanf("%d",&n);
	printf("enter array element:");
	  for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
      printf("enter number to count:");
	scanf("%d",&num);	    
	     for(i=0;i<n;i++)
	     {
	     	if(a[i]==num)
	     	 c=c+1;
		 }
		printf("number count=%d",c);   
}
