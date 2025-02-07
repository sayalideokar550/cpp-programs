#include<stdio.h>
int main()
{
	char a[100],num[20];
	int n,i,flag=0,top,bottum,mid;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter number");
	for(i=0;i<n;i++)
	   scanf("%s",&a[i]);
	printf("enter number to search");
	scanf("%s",&num);
	  top=0;
	  bottum=n-1;
	  while(top<=bottum)
	  {
	  	
	  	mid=((top+bottum)/2);
	     if(strcmp(num,a[mid])==0)	
	     {
	       flag=1;
	       break;
	  } 
	  else if(strcmp(num,a[mid])>0) 
	      top=mid+1;
	  else
	     bottum=mid-1;	      
}
      
      if(flag==0)
         printf("student not found");
      else
	     printf("student found");
         
}
