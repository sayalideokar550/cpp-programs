using namespace std;
#include<iostream>
class demo
{
	public:
		void add(int a,int b)
		{
			int c=a+b;
			cout<<"\n addition1="<<c;
		}
		void add(int a,int b,int c)
		{
			int d=a+b+c;
			cout<<"\naddition2="<<d;
		}
		void add(float a,float b)
		{
			float c=a+b;
			cout<<"\naddition3="<<c;
		}
};
int main()
{
	demo ob;
	ob.add(425,6214);
	ob.add(85,64,23);
	ob.add(5.63f,621.54f);
}
