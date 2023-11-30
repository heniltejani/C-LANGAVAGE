#include <stdio.h>
int main()
{
	int i,n,k=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d +",k);
		k=k*10+1;
	}
	return 0; 
}	
