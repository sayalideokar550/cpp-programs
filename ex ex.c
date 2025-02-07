#include<stdio.h>
void check( int n, int *flage1 ,int*flage2, int*flage3)
{
	int i;
	if(n%2==0)
	   *flage1=1;
	for(i=2;i<n;i++)
{	
    if(n%i==0)
	     break;
}
if(i=n)
     *flage2=1;	  

if(n%3==0||n%7==0)
    *flage3=1;
}
int main()
{
	int n ,flage1,flage2,flage3;
	printf("enter number");
	scanf("%d",&n);
	check(n, &flage1,&flage2,&flage3);
	if(flage1==1)
	printf("\nnum is even");
	if(flage2==1)
	printf("\nnum is prime");
	if(flage3==1)
	printf("\nnum is divisible by 3 or 7");
}
