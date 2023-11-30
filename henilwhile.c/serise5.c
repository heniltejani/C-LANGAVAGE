#include <stdio.h>
int main()
{
	int i,n,k=65;
	
	printf("enter your value:\n");
	scanf("%d",&n);
	
	i=1;
	
	while(i<=n)
	{
		if(k%2==1)
		{
			printf("%c,\t",k);
			i++;
		}
		k++;
	}
	return 0;
}