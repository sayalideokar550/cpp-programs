using namespace std;
#include<iostream>
#include<string.h>
  class mynumber
  {
  	public:
  		int a,b,c,d;
  		mynumber()
  		{
  			a=33;
  			b=44;
  			c=55;
		  }
		 
		  }
  		mynumber(int a,int b,int c)
  		{
  			this->a=a;
  			this->b=b;
  			this->c=c;
		  }
		  void disp()
		  {
		  	d=a+b+c/3;
		  	cout<<"avg2="<<d;
		  }
	};
	int main()
	{
		mynumber ob();
		ob.disp();
		 
		 mynumber ob1(55,33,66);
		 ob1.disp();
	}
