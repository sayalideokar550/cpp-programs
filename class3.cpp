
using namespace std;
#include<iostream>

   class book
   { public:
   	   int bno,p,q;
   	   float p;
   	   char bname[20];
   	  void accept()  
	  {
	  	cout<<"enter roll no name";
	  	cin>>rno>>name;
	  	cout<<"enter 6sub mark";
	  	for(i=0;i<6;i++)
	  	cin>>a[i];
	  }
	  void calcu()
	  {
	  	for(int i=0;i<6;i++)
	  	t=t+a[i];
	  	p=(float)t/6;
	  }
	  void disp()
	  {
	  	cout<<"total="<<t;
	  	cout<<"per="<<p;
	  }
	  
   };	
int main()
{
	student ob;
	ob.accept();
	ob.calcu();
	ob.disp();
}

