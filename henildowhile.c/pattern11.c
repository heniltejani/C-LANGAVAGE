#include <stdio.h>
int main()
{
	int i=5,j;
	
	do{
		j=i;
	 do{
			printf("%d\t",j);
			j++;
		}
		while(j<=5);
		printf("\n");
	    i--;
		
	}
	while(i>=1);
	return 0;
}
