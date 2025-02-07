using namespace std;
#include<iostream>
class demo
{
	public:
		void power(int x,int y=2)
		{
			int m=1;
			for(int i=1;i<=y;i++)
			{
				m=m*x;
			}
			cout<<"\npower="<<m;
		}
		
}ob;
int main()
{
	ob.power(2,8);
	ob.power(8);
	
}
