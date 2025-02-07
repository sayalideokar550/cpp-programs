#include<stdio.h>
int main()
{
	int i,j,k,n=5,count=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				printf(" * ");
				count++;
			}
		}
	}
	printf("count=%d",count);
}
