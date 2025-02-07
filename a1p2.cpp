#include<iostream>
using namespace std;
int main()
{
	int i,n,m=0;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	if(i%n==0)
	{
		m=m+i;
	}
	}
	if(m==n)
	 cout<<"number is perfect";
	 else
	 cout<<"number is not perfect";
}
