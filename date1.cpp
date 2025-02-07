#include<stdio.h>

	void date(int days,int *dd,int *mm,int *yy)
	{
	if((*mm==1||*mm==3||*mm==5||*mm==7||*mm==8||*mm==10||*mm==12)&&*dd>31)
	*dd=*dd-31;
	*mm=*mm+1;
    elseif((*mm==4||*mm==6||*mm==9||*mm==11)&&*dd>30)
    *dd=*dd-30;
	*mm=*mm+1;
	elseif(*mm==2&&*dd>28)
	*dd=*dd-28;
	*mm=*mm+1;            
}
int main()
{
	int dd,mm,yy,days;
	printf("enter dd,mm,yyyy");
	scanf("%d%d%d"&dd,&mm,&yy);
	printf(enter num of days);
	scanf("%d",&days);
	date(days,&dd,&mm,&yy);
	printf("date=",dd_mm_yy);
}
