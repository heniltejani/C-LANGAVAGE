#include <stdio.h>
int main()
{
	int i=1,j;
	
	while(i<=5)
	{	
        j=1;
		while(j<=25)
		{
			printf("%d\t",i++);
			if(i%5==1)
			{
			printf("\n");
			}
			j++;
		}
		i++;
		printf("\n");
		
	}
	return 0;
	
}