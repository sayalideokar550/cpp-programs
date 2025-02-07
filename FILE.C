#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	//printf("enter file name");
	//scanf("%s",&s1);//
	f1=fopen("sayali.c","r");
	f2=fopen("11.c","w");
	if(f1==NULL)
	{
		printf("file not found");
		
	}
	while(!feof(f1));
	{   ch=fgetc(f1);
        fputc(ch,f2);
    }
    printf("zal");
    fclose(f1);
    fclose(f2);
}
        
        
        
	/*if(isupper(ch))
	     fputc((tolower(ch)),f2);
	  else if(islower(ch))
	       futc((tolower(ch)),f2);
	  else
	  fputc(ch,f2);
	  }
	  fclose(f1);
	  fclose(f2);
	  printf("zal");
	  getch();
	  }*/

	

