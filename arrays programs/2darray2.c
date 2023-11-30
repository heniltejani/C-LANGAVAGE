#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value = ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				printf(" \t");
			}
			else
			{
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
	
	
}