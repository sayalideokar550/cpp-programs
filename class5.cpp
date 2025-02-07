//Write a C++ program to create a class Employee with data members Emp_id, Name, department,
// date_of_joining and Salary. Write member functions to accept and display 
//details of ‘n’ employees.
using namespace std;
#include<iostream>
#include<string.h>
   class emp
   {
       public:
	   int id,sal;
	   char name[20],dept[20],date[10];
	   void accept(int id1,int sal1,char name1[20],char dept1[20],char date1[10])
	 	{
	 		id=id1;
	 		sal=sal1;
	 		strcpy(name,name1);
	 		strcpy(dept,dept1);
	 		strcpy(date,date1);	
		 }
		 void disp()
		 {
		 	cout<<"emp id="<<id;
		 	cout<<"emp name="<<name;
		 	cout<<"emp dept="<<dept;
		 	cout<<"emp contact no="<<date;
		 	cout<<"emp contact no="<<sal;
		 }
   } ;
   int main()
   {
   	emp ob;
   	int id,i,sal,n;
	   char name[20],dept[20],date[10];
	   cout<<"enter limit";
	   cin>> n;
	   for(i=0;i<n;i++)
	   {
   	cout<<"enter id ,name,dept,date ,sal ";
   	cin>>id>>name>>dept>>date>>sal;
 
   	ob.accept(id,sal,name,dept,date);
}
		 	for(int i=0;i<n;i++)
           {
   	ob.disp();
   }
}
