#include <stdio.h>
int main()
{
	int i,n,k=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	i=1;
	
	while(i<=n)
	{
		printf("%d +",k);
		k=k*10+1; 
		i++;
	}
	return 0;
}