#include <stdio.h>
int main()
{
	int i=1,j,k=1;
	
	do
	{
		j=1;
		k=5;
		do
		{
			printf("%d\t",k--);
			j++;
		}
		while(j<=i);
		
		
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}