#include<stdio.h>
#include<conio.h>
int main()
{

int a[2][2],i,j;
printf("enter matrix");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	scanf("%d",a[i][j]);	
	}	
}
printf("display matrix=");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("%d",a[i][j]);	
	}	
}
}
