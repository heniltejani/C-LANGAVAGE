#include <stdio.h>
int main()
{
		int num,i=1,j;
		
		printf("enter your value:\n");
		scanf("%d",&num);
		
	 do{
				j=0;
				do{
						printf(" ");
						j++;
				  }while(j<=num-i);
				
				j=1;
				do{
						printf("* ");
						j++;
				  }while(j<=i);
				  
				
				printf("\n");
				i++;
		}while(i<=num);
		return 0;
}