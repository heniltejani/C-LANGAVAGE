#include <stdio.h>
int main()
{
	int i,n,count=0;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
		//printf("\n ");
	}
	if(count==0)
	{
		printf("prime number\n");
	}
	else
	{
		printf("not a prime number\n");
	}
	return 0;
}
	
