#include<stdio.h>
int main()
{
int a[3][3],i,j,s=0;
printf("enter matrix");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);	
	}	
}
   
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{   if( i==j)
		s=s+a[i][j];
	}
		
}
printf("\n treas of matrix=%d",s);	
}
