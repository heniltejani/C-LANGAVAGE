#include <stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{	
		for(j=1;j<=25;j++)
		{	
			printf("%d\t",i++);
		
			if(j%5==0)
			{
					printf("\n");
			}
		}
			printf("\n");
	}
	return 0;
}