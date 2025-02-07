//Write a C++ program to create a class Customer with data members ID, Name, Addr and Contact_No.
// Write member functions to accept and display customer information
using namespace std;
#include<iostream>
#include<string.h>
   class cust
   {
       public:
	   int id;
	   char name[20],addr[20],cno[10];
	   void accept(int id1,char name1[20],char addr1[20],char cno1[10])
	 	{
	 		id=id1;
	 		strcpy(name,name1);
	 		strcpy(addr,addr1);
	 		strcpy(cno,cno1);	
		 }
		 void disp()
		 {
		 	cout<<"cust id="<<id;
		 	cout<<"cust name="<<name;
		 	cout<<"cust addr="<<addr;
		 	cout<<"cust contact no="<<cno;
		 }
		 
   } ;
   int main()
   {
   	cust ob;
   	int id;
	   char name[20],addr[20],cno[10];
   	cout<<"enter id ,name,addr,con no ";
   	cin>>id>>name>>addr>>cno;
   	ob.accept(id,name,addr,cno);
   	ob.disp();
   }
