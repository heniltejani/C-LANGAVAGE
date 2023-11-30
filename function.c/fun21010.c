#include <stdio.h>
int one()
{
	int i,j,k=0;
	
	
	for(i=1;i<=5;i++)       
	{
		for(j=1;j<=i;j++)
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
		}
			printf("\n");
	
	}	
	return k;
}
int main()
{
	printf("\n\nhii pepole\n\n");
	printf("your one and zero tringle:%d",one());
	printf("\n\nbyyyyy...\n\n");
}

