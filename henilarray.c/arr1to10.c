#include <stdio.h>
int main()
{
	int num[10],i,sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("num[%d]=",i);
		scanf("%d",&num[i]);
	}
	printf("\n\n");
	for(i=0;i<10;i++)
	{
	
		printf("num[%d]=%d\n ",i,num[i]);
	    sum=sum+num[i];
	}
	printf("%d",sum);
	return 0;
}

		