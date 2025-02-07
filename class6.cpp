//Write a C++ program to create a class Customer with data members ID, Name, Addr and Contact_No.
// Write member functions to accept and display customer information
using namespace std;
#include<iostream>
#include<string.h>
   class matrix
   {
       public:
	   int a[2][2],i,j,s=0;
	  
	   void accept()
	 	{
	 	    cout<<"enter matrix";
	 	    for(i=0;i<2;i++)
	 	    {
			 for(j=0;j<2;j++)
			 {
			 	    cin>>a[i][j];
		 }
	}
		 void disp()
		 {
		    for(i=0;i<2;i++)
	 	    {
			 for(j=0;j<2;j++)
			 {
			 	   s=s+a[i][j];
		 }
	}  	
		 }
		 
   } ;
   int main()
   {
   	matrix ob;	
   	ob.accept();
   	ob.disp();
   }
