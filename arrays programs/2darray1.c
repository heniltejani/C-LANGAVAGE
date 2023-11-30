#include<stdio.h>
void main()
{
	int a[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}},i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}