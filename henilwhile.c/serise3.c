#include <stdio.h>
int main()
{
	int i,n,temp=1;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		printf("%d , ",temp);
		temp*=2;
		i++;
	}
	return 0;
}