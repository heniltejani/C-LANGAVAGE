#include <stdio.h>
int main()
{
	int i=1,j;
	
	do{	
        j=1;
		do{
			printf("%d\t",i++);
			if(i%5==1)
			{
			printf("\n");
			}
			j++;
		}
		while(j<=25);
		i++;
		printf("\n");
		
	}
	while(i<=5);
	return 0;
	
}