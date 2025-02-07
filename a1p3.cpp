#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter number";
	cin>>n;
	for(i=2;i<=n;i++)
	{
	if(i%n==0)
	{
	break;
	}
	}
	if(i==n)
	 cout<<"number is prime";
	 else
	 cout<<"number is not prime";
}
