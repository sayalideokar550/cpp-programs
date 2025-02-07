using namespace std;
#include<iostream>
#include<string.h>
  class emp
  {
  	public:
  		int eno,sal;
  		char name[20];
  		
  		emp()
  		{
  			eno=101;
  			strcpy(name,"om");
  			sal=99000;
		  }
		  void disp()
		  {
		  	cout<<"emp no="<<eno;
		  	cout<<"emp name="<<name;
		  	cout<<"emp salary="<<sal;
		  }
  };
  int main()
  {
  	emp ob;
  	ob.disp();
  	
  }
