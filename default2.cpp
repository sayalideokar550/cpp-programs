using namespace std;
#include<iostream>
class circle
{
	public:
		void area(float r=2.5f)
		{
			float a=3.14f*r*r;
			
			cout<<"\narea of circle="<<a;
		}
			void circum(float r=3.98f)
		{
			float c=2*3.14f*r;
			
			cout<<"\narea of circumfarence="<<c;
		}
		
}ob;
int main()
{
	ob.area(2.8f);
	ob.area();
	ob.circum();
	ob.circum(8.3);
	
}
