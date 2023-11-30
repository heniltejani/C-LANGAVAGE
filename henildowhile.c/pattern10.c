#include <stdio.h>
int main()
{
	int i=65,j;
	
	do
	{
		j=i;
		do
		{
			printf("%c\t",j);
			j--;
		}
		while(j>=65);
		
		
		printf("\n");
		i++;
	}
	while(i<=69);
	return 0;
}