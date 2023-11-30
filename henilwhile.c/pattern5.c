#include <stdio.h>
int main()
{
	int i=5,j;
	
	while(i>=1)
	{	
        j=1;
		while(j<=5)
		{
			printf("%d\t",i);
			j++;
		}
		i--;
		printf("\n");
	}
	return 0;
	
}