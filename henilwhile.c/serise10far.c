#include <stdio.h>
int main()
{
	int i,n,ans=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	i=1;
	
	while(i<=n)
	{
		ans=ans*i;
		printf("%d\t",i);
		i++;
	}
	printf("\n%d",ans);
	
	return 0;
}