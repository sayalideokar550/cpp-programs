/*create a class Area.
having member functions:
void circle(float r)
rect(float l,float b)
triangle(....)*/
using namespace std;
#include<iostream>

   class area
   { public:
   	   void circle(float r)
   	   {
           int a=3.14*r*r;
		   cout<<"area of circle="<<a;   	   	
	  }
	   void rect(float l,float w)
   	   {
           int a=l*w;
		   cout<<"\narea of rectangle="<<a;   	   	
	  }
	   void tria(float b,float l)
   	   {
           int a=1/2*b*l;
		   cout<<"\narea of triangle="<<a;   	   	
	  }
	  
   };	
int main()
{
	area a1;
	a1.circle(2.2);
	a1.rect(4.5,2.5);
	a1.tria(53,4.5);
}

