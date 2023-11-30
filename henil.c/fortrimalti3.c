#include <stdio.h>
int main()
{
		int num,i,j,k;
		
		printf("enter your value:\n");
		scanf("%d",&num);
		
		for(i=0;i<num;i++)
		{
				for(j=0;j<=i;j++)
				{

						printf(" ");
				}
				for(k=1;k<=num-i;k++)
				{
						printf("*");
				}
				printf("\n");
		}
		return 0;
}