#include <stdio.h>
int main()
{
	int i,n;
	
	printf("enter your number\n");
	scanf("%d",&n);
	
	for(i=-n;i<=n;i++)
	{
		printf("%d\t",i);
	}
	return 0;
	
	
}