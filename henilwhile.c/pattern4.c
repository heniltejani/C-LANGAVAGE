#include <stdio.h>
int main()
{
	int i=1,j=0;
	
	while(i<=10)
	{	
        j=1;
		while(j<=5)
		{
			if(i%2!=0)
			{
			printf("%d\t",i);
			}
			j++;
		}
		i++;
		if(i%2!=0)
		{
		printf("\n");
		}
	}
	return 0;
	
}