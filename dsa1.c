#include<stdio.h>
int main()
{
	int a[100],n,i,num;
	printf("enter limit ");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to scarch");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		  break;
	}
	if(i==n)
	  printf("number not found");
	else
	{
	  printf("number found");
         if(i==0)
           printf("\nbest case");
		else if(i==n-1)
		   printf("\nwost case");
		else
		   printf("\naverage case");      	
	
	}
}
