using namespace std;
#include<iostream>
#include<string.h>
  class mydate
  {
  	public:
  		int dd,mm,yy;
  		
  		mydate(int dd,int mm,int yy)
  		{
  			this->dd=dd;
  			this->mm=mm;
  			this->yy=yy;
		  }
		  void disp()
		  {
		  	switch(mm)
		  	{
		  		case 1:cout<<"date="<<dd<<"-"<<"jan"<<"-"<<yy;
		  		       break;
		  		case 2:cout<<"date="<<dd<<"-"<<"feb"<<"-"<<yy;
		  		       break;
		  		case 3:cout<<"date="<<dd<<"-"<<"mar"<<"-"<<yy;
		  		       break;
		  		case 4:cout<<"date="<<dd<<"-"<<"apr"<<"-"<<yy;
		  		       break;
		  		case 5:cout<<"date="<<dd<<"-"<<"may"<<"-"<<yy;
		  		       break;       
		  		case 6:cout<<"date="<<dd<<"-"<<"jun"<<"-"<<yy;
		  		       break;
		  		case 7:cout<<"date="<<dd<<"-"<<"jul"<<"-"<<yy;
		  		       break;
		  		case 8:cout<<"date="<<dd<<"-"<<"aug"<<"-"<<yy;
		  		       break;
		  		case 9:cout<<"date="<<dd<<"-"<<"sep"<<"-"<<yy;
		  		       break;
		  		case 10:cout<<"date="<<dd<<"-"<<"oct"<<"-"<<yy;
		  		       break;
		  		case 11:cout<<"date="<<dd<<"-"<<"nov"<<"-"<<yy;
		  		       break;
		  		case 12:cout<<"date="<<dd<<"-"<<"dec"<<"-"<<yy;
		  		       break;
		  	
			}
		  }
  };
  int main()
  {
  	mydate ob(21,8,2006);
  	ob.disp();
  	
  }
