#include <stdio.h>
int prime()
{
	int i,n,count=0;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	i=2;
	
	while(i<=n-1)
	{
		if(n%i==0)
		{
			count+=1;
		}
		i++;
	}
	if(count==0)
	{
		printf("prime number\n");
	}
	else
	{
		printf("not a prime number\n");
	}
	return count;
}
int main()
{
	printf("hello\n");
	printf("%d",prime());
	printf("see you soon\n");
}
	
