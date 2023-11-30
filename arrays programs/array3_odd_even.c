#include<stdio.h>
void main()
{
	int i,a[20],count=0,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nEven numbers :");
	for(i=1;i<=10;i++)
	{
		if(a[i]%2==0)
		{
			count++;
			printf("%d \t",a[i]);
			sum+=a[i];
		}
	}
	printf("\n %d even numbers",count);
	printf("\n sum of even numbers %d",sum);
	printf("\n\n\n odd numbers  :");
	count=0;
	sum=0;
	for(i=1;i<=10;i++)
	{
		if(a[i]%2==1)
		{
			count++;
			printf("%d \t",a[i]);
			sum+=a[i];
		}
	}
	printf("\n %d odd numbers",count);
	printf("\n sum of odd numbers %d",sum);
}