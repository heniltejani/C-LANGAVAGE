#include<stdio.h>
void main()
{
	int a[10],i,sum=0,sum2=0;
	for(i=0;i<10;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i%2==0)
		{
			sum+=a[i];
		}
		else
		{
			sum2+=a[i];
		}
	}
	printf("\n sum of even position = %d",sum);
	printf("\n sum of odd position = %d",sum2);
}