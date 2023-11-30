#include<stdio.h>
void main()
{
	int a[50][50],c[50][50],sum[50][50],i,j,b,n,m;
	printf("Enter no of rows =");
	scanf("%d",&n);
	printf("Enter no of colums =");
	scanf("%d",&m);
	for(b=1;b<=2;b++)
	{
		printf("\n %d materics \n",b);
		if(b==1)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("Enter value = ");
					scanf("%d",&a[i][j]);
				}
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("Enter value = ");
					scanf("%d",&c[i][j]);
				}
			}
		}
	}
	for(b=1;b<=2;b++)
	{
		printf("\n %d materics \n",b);
		if(b==1)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("%d\t",a[i][j]);
				}
				printf("\n");
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
		}
	}
	printf("addition of materics \n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=a[i][j]+c[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("subtraction of materics \n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum[i][j]=a[i][j]-c[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}