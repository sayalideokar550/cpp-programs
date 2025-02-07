using namespace std;
#include<iostream>
#include<string.h>
  class emp
  {
  	public:
  		int eno,sal;
  		char name[20];
  		
  		emp(int eno,char name[20],int sal)
  		{
  			this->eno=eno;
  			strcpy(this->name,name);
  			this->sal=sal;
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
  	emp ob(101,"sai",40000);
  	ob.disp();
  	
  }
