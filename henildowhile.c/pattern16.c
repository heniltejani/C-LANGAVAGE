#include <stdio.h>
int main()
{
		int num,i=0,j,k;
		
		printf("enter your value:\n");
		scanf("%d",&num);
		
	  do{
				j=0;
				do
				{
					printf(" ");
					j++;
				}while(j<=i);
				k=1;
				do
				{
						printf("*");
						k++;
				}while(k<=num-i);
				
				printf("\n");
				i++;
		}while(i<num);
		return 0;
}