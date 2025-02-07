#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *n,i,r=1,d,n1;
	n=(int *)malloc(sizeof(int));
	printf("enter number :");
	scanf("%d",n);
	n1=*n;
	while(n>0)
	{
	    d=*n%10;
	    r=r*10+d;
	    *n=*n/10;
	}
	if(n1==*n)
	printf("\n number is palindrom");
	else
	printf("\n number is not palindrom");
	free(n);
}
