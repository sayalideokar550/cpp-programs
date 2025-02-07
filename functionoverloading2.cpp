using namespace std;
#include<iostream>


void sort (int a[],int n)
  {
  	int i,j,t;
  	for(i=0;i<n;i++)
  	{
  		for(j=i+1;j<n;j++)
  		{
  			if(a[i]>a[j])
  			{
		
  			  t=a[i];
  			     a[i]=a[j];
				 a[j]=t;
		}
		  }
	  }
	  for(i=0;i<n;i++)
	  {
	  	cout<<a[i]<<"\t";
	  }
  }
  int main()
  {
  	int a[]={8,46,96,35,46};
  	sort(a,5);
  	
  }
