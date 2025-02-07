#include<stdio.h>
int main()
{
	int a[100],n,i,num,flag=0,top,mid,bottum,cnt=0;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter number");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	printf("enter number to search");
	scanf("%d",&num);
	  top=0;
	  bottum=n-1;
	  while(top<=bottum)
	  {
	  	cnt=cnt+1;
	  	mid=((top+bottum)/2);
	     if(num==a[mid])	
	     {
	       flag=1;
	       break;
	  } 
	  else if(num>a[mid]) 
	      top=mid+1;
	  else
	     bottum=mid-1;	      
}
      printf("%d compearr for this",cnt);
      if(flag==0)
         printf("number not found");
      else
	     printf("number found");
         
}
