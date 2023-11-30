#include<stdio.h>
void main()
{
	int a[50][50],sum=0,size,i,j;
	printf("Enter size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Enter value = ");
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}	
		printf("\n");
	}
	printf("sum of right diagonals = %d",sum);
}