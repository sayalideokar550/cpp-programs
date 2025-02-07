#include <stdio.h>
#include<conio.h>
int main() {
    int n,i; 
    printf("Enter  polynomial: ");
    scanf("%d", &n);

    int coefficients[n+1]; 
    for ( i =n; i >= 0; i--)
	 {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &coefficients[i]);
    }
        printf("The polynomial is: ");
    for (i =n; i >= 0; i--) 
	{
        if (coefficients[i] != 0) 
		{ 
            if (i !=n && coefficients[i] > 0)
			 {
                printf("+"); 
            }
            if (i == 0) 
			{
                printf("%d", coefficients[i]); 
            }
			 else if (i == 1)
			  {
                printf("%dx", coefficients[i]); 
              } 
			else
		   {
                printf("%dx^%d", coefficients[i], i);
            }
        }
    }
    printf("\n");
}
