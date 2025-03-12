using namespace std;
#include<iostream>
inline float perimteter(float l,float w)
{
	return l+w*2;
}
inline float rectangle(float l,float w)
{
	return l*w;
}
int main()
{
	float l,w;
	cout<<"enter length and width=";
	cin>>l>>w;
	cout<<"perimteter="<<perimteter(l,w)<<endl;
	cout<<"aear of rectangle="<<rectangle(l,w)<<endl;

}
