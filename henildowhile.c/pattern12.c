#include <stdio.h>
int main()
{
	int i=1,j,k=0;
	
	
   do
	{
		j=1;
       do
		{
			if(k==0)
			{
				k=1;
			}
			else
			{ 
				k=0;
			}
			printf("%d\t",k);
			j++;
		}
		while(j<=i);
			printf("\n");
			i++;
	
	}
	while(i<=5);
	return 0;	
}

