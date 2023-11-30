#include <stdio.h>
int main()
{
	int i,n;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	i=1;
	
	while(i<=n)
	{
		printf("1/%d +",i);
		i++;
	}
	return 0;
}