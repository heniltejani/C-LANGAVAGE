#include <stdio.h>
int main()
{
	int i=1,j=1;
	
	while(i<=5)
	{	
        j=1;
		while(j<=5)
		{
			j++;
			printf("%d\t",i);
		}
		i++;
		printf("\n");
	}
	return 0;
	
}