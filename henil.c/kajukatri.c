#include <stdio.h>
int main()
{
		int num,i,j;
		
		printf("enter your value:\n");
		scanf("%d",&num);
		
		for(i=1;i<=num;i++)
		{
				for(j=1;j<=num-i;j++)
				{
						printf(" ");
				}
				for(j=1;j<=i;j++)
				{
						printf("*");
				}
				for(j=1;j<=i-1;j++)
				{
					printf("*");
				}
				printf("\n");
		}
		for(i=num-1;i>=1;--i)
		{
				for(j=0;j<=(num-1)-i;j++)
				{

						printf(" ");
				}
				for(j=1;j<=2*i-1;j++)
				{
						printf("*");
				}
				printf("\n");
		}
		return 0;
}