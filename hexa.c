#include<stdio.h>

int main()
{
	int a[100],n,t,i;
	printf("enter number");
	scanf("%d",&t);
	n=t;
	i=0;
	while(n>0)
	{
	a[i++]=n%2;
	n=n/2;
   }
   printf("\nbainry number=");
     	for(i=i-1;i>0;i--)
     	 printf("%d",a[i]);
    n=t;
	i=0;
	while(n>0)
	{
	a[i++]=n%8;
	n=n/8;
   }
   printf("\noctal number=");
     	for(i=i-1;i>0;i--)
     	 printf("%d",a[i]);
	n=t;
	i=0;
	while(n>0)
	{
	a[i++]=n%16;
	n=n/16;
   }
   printf("\nhexa number=");
     	for(i=i-1;i>0;i--)
     	if(a[i]==10)
     	  printf("A");
     	else if(a[i]==11)
		   printf("B");
		else if(a[i]==12)
		   printf("c");
		else if(a[i]==13)
		   printf("D");
		else if(a[i]==14)
		   printf("E");
		else if(a[i]==15)
		   printf("F");             
     	else
		  printf("%d",a[i]); 	 
}
