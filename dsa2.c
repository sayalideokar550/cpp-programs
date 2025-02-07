#include<stdio.h>
int main()
{
	int a[100],n,num,i,flag=0,top,mid,bottom,cnt=0;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search");
	scanf("%d",&num);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		cnt=cnt+1;
		mid=top+bottom/2;
		if(a[mid]==num)
		{
		flag=1;
		break;
	   }
	
	if(num>a[mid])
	  top=mid+1;
	else
	   bottom=mid-1;  
    }
    printf("%d compare for this",cnt);
	if(flag==0)
	printf("number is not  found");
	else
	printf("number is  found");
}
