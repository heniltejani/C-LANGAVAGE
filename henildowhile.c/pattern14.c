#include <stdio.h>
int main()
{
	int i=5,j;
	
	do{
		j=1;
		 do{
				printf("*\t");
				j++;
		 }while(j<=i);
		 
		 printf("\n");
		 i--;
	}
	while(i>=1);
}
