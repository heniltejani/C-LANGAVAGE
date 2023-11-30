#include <stdio.h>
int main()
{
	char i=1,j;
	int a=65;
	
	while(i<=5)
	{
		j=0;
		while(j<5)
		{
			printf("%c\t",a++);
			j++;
		}
			
			printf("\n");
			i++;
	}
	return 0;
}