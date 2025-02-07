/*Class Demo
{
   public:
        void max(int a,int b,int c)
         {}
        void min(int a,int b,int c)
         {}
        void average(int a,int b,int c)
         {}
};

*/
using namespace std;
#include<iostream>

   class demo
   { public:
   	   void max(int a,int b,int c)
   	   {
           if(a>b&&a>c)
		   cout<<"\nmax="<<a;
		   else if(b>a&&b>c)
		    cout<<"\nmax="<<b;
			else
			  cout<<"\nmax="<<c;   	   	
	  }
	   void min(int a,int b,int c)
   	   {
           if(a<b&&a<c)
		   cout<<"\nmin="<<a;
		   else if(b>a&&b>c)
		    cout<<"\nmin="<<b;
			else
			  cout<<"\nmin="<<c;   	   	
	  }  	   	
	  
	   /*void avg(float b,float l)
   	   {
           int a=1/2*b*l;
		   cout<<"\narea of triangle="<<a;   	   	
	  }*/
	  
   };	
int main()
{
	demo ob;
	ob.max(55,37,91);
	ob.min(52,62,84);
	
}

