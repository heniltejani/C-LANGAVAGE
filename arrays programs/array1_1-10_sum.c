#include<stdio.h>
void main()
{
	int a[10],b,sum=0;
	for(b=0;b<10;b++)
	{
		printf("a[%d]=",b);
		scanf("%d",&a[b]);
	}
	printf("\n 1 to 10 \n");
	for(b=0;b<10;b++)
	{
		printf("a[%d]=%d\n",b,a[b]);
		sum=sum+a[b];
	}
	printf("\n sum = %d\n",sum);
	printf("\n 10 to 1 \n");
	for(b=9;b>=0;b--)
	{
		printf("a[%d]=%d\n",b,a[b]);
	}
	
}