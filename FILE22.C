#include<stdio.h>
#include<stdlib.h> 
int main()
{
	FILE *f1;
	int num;
	f1=fopen("num.txt","r");
	if(f1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(!feof(f1))
	{
		fscanf(f1,"%d",&num);
		printf("%d",num);
	}
	fclose(f1);
	getch();
}
