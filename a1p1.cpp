#include<iostream>
using namespace std;
int main()
{
	int i,n,m=1;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		m=m*i;
	}
	cout<<"factorial="<<m;
}
