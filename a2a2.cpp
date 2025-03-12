#include<iostream>
using namespace std;
inline int power(int x,int y=2)
{
	int i,m=1;
	for(i=1;i<=x;i++)
	{
	  	m=m*y;
	}
	return m;
}
int main()
{
	cout<<"power="<<power(4)<<endl;
	cout<<"power="<<power(7,9)<<endl;
}
