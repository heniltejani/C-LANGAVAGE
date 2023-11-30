#include <stdio.h>
int main()
{
	int i=1,j=1;
	
	while(i<=5)
	{	
        j=0;
		while(j<5)
		{
			j++;
			printf("%d\t",j);
		}
		i++;
		printf("\n");
	}
	return 0;
	
}