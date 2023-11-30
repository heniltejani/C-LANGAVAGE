#include<stdio.h>
void main()
{
	int a[50][50],i,j,size,sum=0,sum1=0;
	printf("Enter size = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("Enter value = ");
			scanf("%d",&a[i][j]);
			if(j>i)
			{
				sum+=a[i][j];
			}
			if(j<i)
			{
				sum1+=a[i][j];
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
	printf("Sum of upper traingle = %d\n",sum);
	printf("Sum of lower traingle = %d",sum1);
}