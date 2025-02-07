#include<stdio.h>
int main()
{
	 int n,d,s=0,n1;
	printf("enter num");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		d=n%10;
		s=d*d*d+s;
		n=n/10;
	}
	if(s==n1)
	printf("num is arm");
	else
	printf("num is not arm");
}
