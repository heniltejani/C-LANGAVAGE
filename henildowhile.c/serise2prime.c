#include <stdio.h>
int main()
{
	int i,n,count=0;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	i=2;
	
	do
	{
		if(n%i==0)
		{
			count+=1;
		}
		i++;
	}
	while(i<=n-1);
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
	
