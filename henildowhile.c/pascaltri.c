#include <stdio.h>
int main()
{
	int i,j,k,n,temp=1;
	
	printf("enter you value:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		temp=1;
		for(k=1;k<=i;k++)
		{
			printf("%d ",temp);
			temp=temp*(i-k)/k;
		}
		printf("\n");
	}
	return 0;
}