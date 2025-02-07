
#include<stdio.h>
int main()
{
int i;
for(i=4;i!=2;i=(i+1)%13)
printf("result=%d",i);
getch();
return 0;
}

